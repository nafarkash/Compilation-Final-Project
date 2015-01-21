;;; compiler.scm
;;; Assignment 2, Tag-Parser for Scheme
;;;
;;; Modified on 24/12/14 for Assignment 3
;;;
;;; Programmers: Naor Farcas, Roei Biton 

(print-graph #f) ; display circular structures
(print-gensym #f) ; print gensym as g1234
(case-sensitive #f) ; ditto
(print-brackets #f) ; do not use brackets when pretty-printing

(revert-interaction-semantics) ; allow builtins to be redefined

;;; fix bug in optimizer
(#%$sputprop 'append '*flags* 122)
(#%$sputprop 'append! '*flags* 34)
(#%$sputprop 'list* '*flags* 1250)
(#%$sputprop 'cons* '*flags* 1250)

;;; And just for good luck :-)
(define with (lambda (s f) (apply f s)))


asdasd

(define *reserved-words*
  '(and begin cond define do else if lambda
        let let* letrec or quasiquote unquote 
        unquote-splicing quote set!))

(define *void-object* (void))

(define beginify
  (lambda (s)
    (cond ((null? s) *void-object*)
	  ((null? (cdr s)) (car s))
	  (else `(begin ,@s)))))


(define not-reserved?
	(lambda (expr)
		(not (member expr *reserved-words*))))

(define simple-pred-const?
  (lambda (c)
    (or (boolean? c) (char? c) (number? c) (string? c))))

(define var?
  (lambda (v)
    (and (symbol? v) (not-reserved? v))))

(define var-list?
	(lambda (lst)
		(cond ((null? lst) #t)
			((member lst *reserved-words*) #f)
          	((member (car lst) *reserved-words*) #f)
			(else (var-list? (cdr lst)))
		)
	))

(define imp-list?
  (lambda (lst)
    (cond ((null? lst) #f)
          ((number? lst) #t)
          ((var? lst) #t)
          ((member lst *reserved-words*) #f)
          ((member (car lst) *reserved-words*) #f)
          (else (imp-list? (cdr lst)))
          )))

(define doProperList
  (lambda (imp-list)
    (if (or (number? imp-list) (symbol? imp-list))
        (cons imp-list '())
        (cons (car imp-list) (doProperList (cdr imp-list))))))

(define take
  (lambda (lst s)
    (if (= s 0)
        (list)
        (cons (car lst) (take (cdr lst) (- s 1)))
        )))


(define takeArg
	(lambda (lst proc)
		(if (null? lst)
			lst
			(cons (proc lst) (takeArg (cdr lst) proc))
		)
	)
)


(define cond-handler
	(lambda (lst)
		(cond ((or (null? lst) (null? (car lst))) '())
			((eq? (caar lst) 'else) (cadar lst))
			(else 
				(let ((pred (caar lst))
					(dit (beginify (cdar lst)))
					(dif (cond-handler (cdr lst))))
				(if (null? dif)
					`(if ,pred ,dit)
					`(if ,pred ,dit ,dif)	
				))))))

(define and-handler
	(lambda (lst)
		(if (eq? (length lst) 1) 
			(car lst)
			`(if ,(car lst) ,(and-handler (cdr lst)) #f)
		)
	)
)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;   Mayer functions   ;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define ^quote?
  (lambda (tag)
    (lambda (e)
      (and (pair? e)
	   (eq? (car e) tag)
	   (pair? (cdr e))
	   (null? (cddr e))))))

(define unquote? (^quote? 'unquote))
(define unquote-splicing? (^quote? 'unquote-splicing))

(define expand-qq
  (lambda (e)
    (cond ((unquote? e) (cadr e))
	  ((unquote-splicing? e)
	   (error 'expand-qq "unquote-splicing here makes no sense!"))
	  ((pair? e)
	   (let ((a (car e))
		 (b (cdr e)))
	     (cond ((unquote-splicing? a) `(append ,(cadr a) ,(expand-qq b)))
		   ((unquote-splicing? b) `(cons ,(expand-qq a) ,(cadr b)))
		   (else `(cons ,(expand-qq a) ,(expand-qq b))))))
	  ((vectpred-or? e) `(list->vector ,(expand-qq (vector->list e))))
	  ((or (null? e) (symbol? e)) `',e)
	  (else e))))



(define Ym
  (lambda fs
    (let ((ms (map
		(lambda (fi)
		  (lambda ms
		    (apply fi (map (lambda (mi)
				     (lambda args
				       (apply (apply mi ms) args))) ms))))
		fs)))
      (apply (car ms) ms))))

(define expand-letrec
  (lambda (letrec-expr)
    (with letrec-expr
      (lambda (_letrec ribs . exprs)
	(let* ((fs (map car ribs))
	       (lambda-exprs (map cdr ribs))
	       (nu (gensym))
	       (nu+fs `(,nu ,@fs))
	       (body-f `(lambda ,nu+fs ,@exprs))
	       (hofs
		(map (lambda (lambda-expr) `(lambda ,nu+fs ,@lambda-expr))
		  lambda-exprs)))
	  `(Ym ,body-f ,@hofs))))))


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;



(define parse
  (let ((run
         (compose-patterns

         ;;;quasiquote
		  (pattern-rule
		   `(quasiquote . ,(? 'arg))
		    (lambda (arg)
		     (parse (expand-qq (car arg)))))	

		 ;;;const     	
          (pattern-rule
           (? 'c simple-pred-const?)
           (lambda (c) `(const ,c)))
          (pattern-rule
           `(quote ,(? 'c))
           (lambda (c) `(const ,c)))

          ;;; var 
          (pattern-rule
          	   (? 'v var?)
          	   (lambda (v) `(var ,v)))

          ;;; if
          (pattern-rule
           `(if ,(? 'test) ,(? 'dit))
           (lambda (test dit)
             `(if3 ,(parse test) ,(parse dit) (const ,*void-object*))))
          (pattern-rule
           `(if ,(? 'test) ,(? 'dit) ,(? 'dif))
           (lambda (test dit dif)
             `(if3 ,(parse test) ,(parse dit) ,(parse dif))))

          ;;; begin 
          (pattern-rule
          	`(begin . ,(? 'exprs list?))
          	(lambda (exprs)
          		(if (null? exprs)
          			`(const ,*void-object*)
          			`(seq (,@(map parse exprs)))
          		)
          	)
          )

          ;;; let
          (pattern-rule
          	`(let ,(? 'vars list?) . ,(? 'exprs pair? list?))
          	(lambda (vars exprs)
          		(let ((varsL (takeArg vars caar))
          			(valsL (takeArg vars cadar)))
          		(parse `((lambda ,varsL ,@exprs) ,@valsL))
          	))
          )
          
          ;;; let*
          (pattern-rule
           `(let* () ,(? 'expr) . ,(? 'exprs list?))
           (lambda (expr exprs)
             (parse (beginify (cons expr exprs)))))
          (pattern-rule
           `(let* ((,(? 'var var?) ,(? 'val)) . ,(? 'rest)) . ,(? 'exprs))
           (lambda (var val rest exprs)
             (parse `(let ((,var ,val))
          	       (let* ,rest . ,exprs)))))

          ;;;lambda 
		  (pattern-rule
           `(lambda ,(? 'vars list? var-list?) . ,(? 'exprs pair? list?))
       		(lambda (vars exprs)
       			`(lambda-simple (,@vars) ,(parse (beginify exprs)))))

		  (pattern-rule
           `(lambda ,(? 'args var?) . ,(? 'exprs pair? list?))
       		(lambda (args exprs)
       			`(lambda-variadic ,args ,(parse (beginify exprs)))))

          (pattern-rule
           `(lambda ,(? 'vars imp-list?) . ,(? 'exprs pair? list?))
       		(lambda (vars exprs)
       			(let* ((pList (doProperList vars))
       				(size (length pList))
       				(v-rest (list-tail pList (- size 1)))
       				(v-first (take pList (- size 1)))
       				)
       			`(lambda-opt (,@v-first) ,@v-rest ,(parse (beginify exprs))))))

		  ;;;define
		  (pattern-rule
		  	`(define ,(? 'var var?) ,(? 'expr))
		  	(lambda (var peExpr)
		  		`(define ,(parse var) ,(parse peExpr)))
		  )
		  (pattern-rule
		  	`(define (,(? 'var var?) . ,(? 'v)) . ,(? 'exprs pair? list?))
		  	(lambda (var v peExpr)
		  		`(define ,(parse var) ,(parse `(lambda ,v ,@peExpr)))
		  	)
		  ) 

		  ;;;cond
		  (pattern-rule
		  	`(cond . ,(? 'args pair? list?))
		  	(lambda (args)
		  		(parse (cond-handler args))
		  	)
		  ) 

		  ;;;and
		  (pattern-rule
		  	`(and . ,(? 'args list?))
		  	(lambda (args)
		  		(cond 
		  			((null? args) (parse #t))
		  			((eq? (length args) 1) (parse (car args)))
		  			(else (parse (and-handler args)))
		  		)
		  	)
		  ) 

		  ;;;or
		  (pattern-rule
		  	`(or . ,(? 'args list?))
		  	(lambda (args)
		  		(cond 
		  			((null? args) (parse #f))
		  			((eq? (length args) 1) (parse (car args)))
		  			(else `(or ,(map parse args)))
		  		)
		  	)
		  )
		  ;;;letrec
		  (pattern-rule
		  	`(letrec . ,(? 'args pair? list?))
		  	(lambda (args)
		  		(parse (expand-letrec `(letrec ,(car args) ,(cadr args))))
		  	)
		  )

		  ;;;application 
		  (pattern-rule
		  	(? 'app not-reserved?)
		  	(lambda (app)
		  		`(applic ,(parse (car app)) ,(map parse (cdr app))))
		  )

          )))
    (lambda (e)
      (run e
           (lambda ()
             (error 'parse
                    (format "I can't recognize this: ~s" e)))))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;; assignment 3 ;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
(define pred-if? (lambda (e) (eq? (car e) 'if3)))
(define pred-seq? (lambda (e) (eq? (car e) 'seq)))
(define pred-applic? (lambda (e) (eq? (car e) 'applic)))
(define pred-tc-applic? (lambda (e) (eq? (car e) 'tc-applic)))
(define pred-define? (lambda (e) (eq? (car e) 'define)))
(define pred-lambda-simple? (lambda (e) (eq? (car e) 'lambda-simple)))
(define pred-lambda-variadic? (lambda (e) (eq? (car e) 'lambda-variadic)))
(define pred-lambda-opt? (lambda (e) (eq? (car e) 'lambda-opt)))
(define pred-var? (lambda (e) (eq? (car e) 'var)))
(define pred-const? (lambda (e) (eq? (car e) 'const)))
(define pred-or? (lambda (e) (eq? (car e) 'or)))

(define if-test (lambda (e) (cadr e)))
(define if-dit (lambda (e) (cADDr e)))
(define if-dif (lambda (e) (cADDdr e)))
(define seq-body (lambda (e) (cadr e)))
(define or-body (lambda (e) (cadr e)))
(define applic-proc (lambda (e) (cadr e)))
(define applic-args (lambda (e) (cADDr e)))
(define define-param (lambda (e) (cadr e)))
(define define-body (lambda (e) (cADDr e)))
(define lambda-args (lambda (e) (cadr e)))
(define lambda-body (lambda (e) (cADDr e)))

(define fIND-pos 
	(lambda (lst elem pos)
		(cond ((null? lst) #f)
			((eq? (car lst) elem) pos)
			(else (fIND-pos (cdr lst) elem (ADD1 pos)))
		)	
	)
)

(define fIND-in-bvar
	(lambda (env elem pos)
		(cond ((null? env) #f)
			((fIND-pos (car env) elem 0) (list pos (fIND-pos (car env) elem 0)))
			(else (fIND-in-bvar (cdr env) elem (ADD1 pos)))
		)
	)
)

(define var-handler
	(lambda (pe params env)
		(let* ((var (cadr pe))
				(position (fIND-pos params var 0)))
			(if position 
				`(pvar ,var ,position)
				(let ((bvar-position (fIND-in-bvar env var -1)))
					(if bvar-position
						`(bvar ,var ,@bvar-position)
						`(fvar ,var)
					)
				)
			)
		)
	)
)

(define parse-lex
	(lambda (pe params env)
		(cond 
			((null? pe) pe)
			((pred-var? pe) (var-handler pe params env))
			((pred-const? pe) pe)
			((pred-lambda-simple? pe) 
				`(lambda-simple ,(lambda-args pe) ,(parse-lex (lambda-body pe) (lambda-args pe) (cons (lambda-args pe) env))))
			((pred-lambda-variadic? pe) 
				`(lambda-variadic ,(lambda-args pe) 
					,(parse-lex (lambda-body pe) (list (lambda-args pe)) (cons (list (lambda-args pe)) env))))
			((pred-lambda-opt? pe)
				(let ((args (append (cadr pe) (list (cADDr pe))))
					(body (cADDdr pe)))
				`(lambda-opt ,(cadr pe) ,(cADDr pe) ,(parse-lex body args (cons args env)))
				))
			((ormap (lambda (e) (eq? (car pe) e)) '(if3 seq define or applic tc-applic))
				(cons (car pe) (parse-lex (cdr pe) params env)))
			((list? pe)
				(cons (parse-lex (car pe) params env) (parse-lex (cdr pe) params env)))
			(else (error 'parse-lex
                    (format "I can't recognize this: ~s" pe)))	

		)
	)
)


(define pe->lex-pe
	(lambda (pe)
		(parse-lex pe '() '())
	)
)


(define ATP
	(lambda (tree tp?)
		(cond
			((ormap (lambda (e) (eq? (car tree) e)) '(const fvar pvar bvar var)) tree)
			((pred-if? tree) `(if3 ,(ATP (if-test tree) #f) ,(ATP (if-dit tree) tp?) ,(ATP (if-dif tree) tp?)))
			((pred-seq? tree)
				(let* ((body (seq-body tree))
					(size (length body))
					(new-body (cons 
							(map (lambda (pe) (ATP pe #f)) (take body (- size 1)))
							(list (ATP (car (list-tail body (- size 1))) tp?)))
				))
				`(seq ,new-body)))
			((pred-or? tree)
				(let* ((body (or-body tree))
					(size (length body))
					(new-body (cons 
							(map (lambda (pe) (ATP pe #f)) (take body (- size 1)))
							(list (ATP (car (list-tail body (- size 1))) tp?)))
				))
				`(or ,new-body)))
			((pred-lambda-simple? tree) `(lambda-simple ,(lambda-args tree) ,(ATP (lambda-body tree) #t)))
			((pred-lambda-variadic? tree) `(lambda-variadic ,(lambda-args tree) ,(ATP (lambda-body tree) #t)))
			((pred-lambda-opt? tree)
				(let ((args (cadr tree))
					(extra-arg (cADDr tree))
					(body (cADDdr tree)))
				`(lambda-opt ,args ,extra-arg ,(ATP body #t))))

			((pred-define? tree) `(define ,(define-param tree) ,(ATP (define-body tree) tp?)))
			((pred-applic? tree) 
				(let* ((proc (applic-proc tree))
					(args (applic-args tree))
					(new-proc (ATP proc #f))
					(new-args (map (lambda (pe) (ATP pe #f)) args)))
				(if tp?
					`(tc-applic ,new-proc ,new-args)
					`(applic ,new-proc ,new-args)
			)))
			(else (error 'tc-applic
                    (format "I can't recognize this: ~s" tree)))

		)
	)
)

(define annotate-tc 
	(lambda (pe)
		(ATP pe #f)
	)
)



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;  Final Project  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(define ^^label
  (lambda (name)
    (let ((n 0))
      (lambda ()
        (set! n (+ n 1))
        (string-append name
          (number->string n))))))
(define ^label-if3else (^^label "Lif3else"))
(define ^label-if3exit (^^label "Lif3exit"))
(define nl (list->string (list #\newline)))
(define code-gen-if3
  (lambda (e)
    (with e
     (lambda (if3 test do-if-true do-if-false)
       (let ((code-test (code-gen test))
             (code-dit (code-gen do-if-true))
             (code-dif (code-gen do-if-false))
             (label-else (^label-if3else))
             (label-exit (^label-if3exit)))
	(string-append
		code-test nl ; when run, the result of the test will be in R0
        "CMP(R0, SOB_BOOLEAN_FALSE);" nl
        "JUMP_EQ(" label-else ");" nl
		code-dit nl
        "JUMP(" label-exit ");" nl
        label-else ":" nl
        code-dif nl
        label-exit ":"))))))


(define file->sexpr
	(lambda (filename)
		(let ((input (open-input-file filename)))
			(letrec ((run
					(lambda ()
						(let ((e (read input)))
						(if (eof-object? e)
							(begin (close-input-port input)
								'())
							(cons e (run))
							)
						))
					)	
			)
			(run))
		)
	)
)


(define writeFile
  (lambda(str)
    (let  ((p (open-output-file "prog.c")))
      (display str p)
      (close-output-port p)
    )))


(define prolog
	(lambda ()
		(string-append
			"#include <stdio.h>" nl
			"#include <stdlib.h>" nl

			"/* change to 0 for no debug info to be printed: */" nl
			"#define DO_SHOW 1" nl

			"#include \"./arch/cisc.h\"" nl
			
			"int main()" nl
			"{" nl
			  "START_MACHINE" nl
			  "#include \"arch/char.lib\"" nl
			  "#include \"arch/io.lib\"" nl
			  "#include \"arch/math.lib\"" nl
			  "#include \"arch/string.lib\"" nl
			  "#include \"arch/system.lib\"" nl
			  "#include \"arch/scheme.lib\"" nl

			  "ADD (IND(0), IMM(1000))" nl
			  "MOV (IND(100), IMM(T_VOID))" nl
			  "#define SOB_VOID 100" nl
			  "MOV (IND(101), IMM(T_NIL))" nl
			  "#define SOB_NIL 101" nl
			  "MOV (IND(102), IMM(T_BOOL))" nl
			  "MOV (IND(103), IMM(0))" nl
			  "#define SOB_FALSE 102" nl
			  "MOV (IND(104), IMM(T_BOOL))" nl
			  "MOV (IND(105), IMM(1))" nl
			  "#define SOB_TRUE 104" nl



			
		)
	)
)

(define epilog
	(lambda ()
		(string-append
			"CMP(R0, SOB_NIL);" nl
  			"JUMP_EQ(Exit)" nl
  			"PUSH(R0);" nl
  			"CALL(WRITE_SOB);" nl
  			"DROP(1);" nl
  			"Exit:" nl
  			"SHOW(\"\\exist with\", R0);" nl
			 "STOP_MACHINE;" nl
  			"return 0;" nl
			"}" nl
		)
	)
)


;; Recieves two strings.
;; Reading from the input file and exporting the compiled code to output file.
(define compile-scheme-file
	(lambda (input output)
		(let* ((text (file->sexpr input))
			(parsed (string-append 
						(prolog)
						(apply string-append (map (lambda (e) (code-gen (annotate-tc (pe->lex-pe (parse e))))) text))
						(epilog)
					)))
		(writeFile parsed))
		
			
	)
)


(define code-gen
	(lambda (e)
		(cond
			((pred-if? e) code-gen-if3)
			((pred-define? e) code-gen-define)
			((pred-lambda-simple? e) code-gen-lambda-simple)
			((pred-lambda-opt? e) code-gen-lambda-opt)
			((pred-lambda-variadic? e) code-gen-lambda-variadic)
			((pred-seq? e) code-gen-seq)
			((pred-or? e) code-gen-or)
			((pred-const? e) (code-gen-const (cadr e)))
			((pred-applic? e) code-gen-applic)
			((pred-tc-applic? e) code-gen-tc-applic)
			(else (error 'code-gen
                    (format "I can't recognize this: ~s" e)))
		)
	)
)

(define code-gen-const
	(lambda (e)
		(cond 
			((null? e) "MOV(R0, IMM(SOB_NIL))")
			((eq? e "void") "MOV(R0, IMM(SOB_VOID))")
			((boolean? e)
				(if (eq? e #t)
					"MOV(R0, IMM(SOB_TRUE)) "
					"MOV(R0, IMM(SOB_FALSE)) "
				)
			)
			((string? e) )
			((number? e) )
			((char? e) )
			(else (error 'code-gen-const
				(format "I can't recognize this: ~s" e)))
		)
	)
)

