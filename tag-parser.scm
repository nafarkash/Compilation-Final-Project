;;; TAG-PARSER

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
