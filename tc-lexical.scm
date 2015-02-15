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
(define pred-pvar? (lambda (e) (eq? (car e) 'pvar)))
(define pred-bvar? (lambda (e) (eq? (car e) 'bvar)))
(define pred-fvar? (lambda (e) (eq? (car e) 'fvar)))

(define if-test (lambda (e) (cadr e)))
(define if-dit (lambda (e) (caddr e)))
(define if-dif (lambda (e) (cadddr e)))
(define seq-body (lambda (e) (cadr e)))
(define or-body (lambda (e) (cadr e)))
(define applic-proc (lambda (e) (cadr e)))
(define applic-args (lambda (e) (caddr e)))
(define define-param (lambda (e) (cadr e)))
(define define-body (lambda (e) (caddr e)))
(define lambda-args (lambda (e) (cadr e)))
(define lambda-body (lambda (e) (caddr e)))

(define find-pos
  (lambda (lst elem pos)
    (cond ((null? lst) #f)
      ((eq? (car lst) elem) pos)
      (else (find-pos (cdr lst) elem (add1 pos)))
    )
  )
)

(define find-in-bvar
  (lambda (env elem pos)
    (cond ((null? env) #f)
      ((find-pos (car env) elem 0) (list pos (find-pos (car env) elem 0)))
      (else (find-in-bvar (cdr env) elem (add1 pos)))
    )
  )
)

(define var-handler
  (lambda (pe params env)
    (let* ((var (cadr pe))
        (position (find-pos params var 0)))
      (if position
        `(pvar ,var ,position)
        (let ((bvar-position (find-in-bvar env var -1)))
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
        (let ((args (append (cadr pe) (list (caddr pe))))
          (body (cadddr pe)))
        `(lambda-opt ,(cadr pe) ,(caddr pe) ,(parse-lex body args (cons args env)))
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
          (new-body (append
              (map (lambda (pe) (ATP pe #f)) (take body (- size 1)))
              (list (ATP (car (list-tail body (- size 1))) tp?)))
        ))
        `(seq ,new-body)))
      ((pred-or? tree)
        (let* ((body (or-body tree))
          (size (length body))
          (new-body (append
              (map (lambda (pe) (ATP pe #f)) (take body (- size 1)))
              (list (ATP (car (list-tail body (- size 1))) tp?)))
        ))
        `(or ,new-body)))
      ((pred-lambda-simple? tree) `(lambda-simple ,(lambda-args tree) ,(ATP (lambda-body tree) #t)))
      ((pred-lambda-variadic? tree) `(lambda-variadic ,(lambda-args tree) ,(ATP (lambda-body tree) #t)))
      ((pred-lambda-opt? tree)
        (let ((args (cadr tree))
          (extra-arg (caddr tree))
          (body (cadddr tree)))
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
