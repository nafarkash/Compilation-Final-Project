;;; compiler.scm
;;; Compiler from Scheme to Cisc language
;;;
;;; Programmers: Naor Farcas, Roei Biton

(load "pattern-matcher.scm")
(load "tag-parser.scm")
(load "tc-lexical.scm")


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
(define ^label-orExit (^^label "LorExit"))
(define ^label-lambdaCont (^^label "LlambdaCont"))
(define ^label-lambdaExit (^^label "LlambdaExit"))
(define ^label-lambdaEnvBegin (^^label "L_lambda_env_Begin"))
(define ^label-lambdaEnvEnd (^^label "L_lambda_env_End"))
(define ^label-lambdaArgsBegin (^^label "L_lambda_args_Begin"))
(define ^label-lambdaArgsEnd (^^label "L_lambda_args_End"))
(define ^label-lambdaCorrectionBegin (^^label "L_lambda_correction_begin"))
(define ^label-lambdaCorrectionEnd (^^label "L_lambda_correction_end"))
(define ^label-notProc (^^label "LnotProcedure"))
(define ^label-applicExit (^^label "LprocExit"))
(define ^label-applicOverride (^^label "LprocOverride"))
(define nl (list->string (list #\newline)))
(define tab (list->string (list #\tab)))

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


(define write2File
  (lambda (str output)
  	(if (file-exists? output) (delete-file output))
    (let  ((p (open-output-file output)))
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

			"#include \"arch/cisc.h\"" nl

			"int main()" nl
			"{" nl
			  "START_MACHINE;" nl
			  "JUMP(CONTINUE);" nl
			  "#include \"arch/char.lib\"" nl
			  "#include \"arch/io.lib\"" nl
			  "#include \"arch/math.lib\"" nl
			  "#include \"arch/string.lib\"" nl
			  "#include \"arch/system.lib\"" nl
			  "#include \"arch/scheme.lib\"" nl
			  "CONTINUE:" nl
			  "ADD (IND(0), IMM(1000));" nl
			  "MOV (IND(100), IMM(T_VOID));" nl
			  "#define SOB_VOID 100" nl
			  "MOV (IND(101), IMM(T_NIL));" nl
			  "#define SOB_NIL 101" nl
			  "MOV (IND(102), IMM(T_BOOL));" nl
			  "MOV (IND(103), IMM(0));" nl
			  "#define SOB_FALSE 102" nl
			  "MOV (IND(104), IMM(T_BOOL));" nl
			  "MOV (IND(105), IMM(1));" nl
			  "#define SOB_TRUE 104" nl
			  nl "/* begin of generated code */ " nl nl nl




		)
	)
)

(define epilog
	(lambda ()
		(string-append
  			"SHOW(\"exit with \", R0);" nl
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
						(apply string-append (map (lambda (e) (code-gen (annotate-tc (pe->lex-pe (parse e))) 0 0)) text))
						(epilog)
					)))
		(write2File parsed output))


	)
)


(define code-gen
	(lambda (e params env)
		(cond
			((pred-if? e) (code-gen-if3 e params env))
			((pred-define? e) (code-gen-define e params env))
			((pred-lambda-simple? e) (code-gen-lambda-simple e params env))
			((pred-lambda-opt? e) (code-gen-lambda-opt e params env))
			((pred-lambda-variadic? e) (code-gen-lambda-variadic e params env))
			((pred-seq? e) (code-gen-seq e params env))
			((pred-or? e) (code-gen-or e params env))
			((pred-const? e) (code-gen-const e params env))
			((pred-applic? e) (code-gen-applic e params env))
			((pred-tc-applic? e) (code-gen-tc-applic e params env))
      ((pred-bvar? e) (code-gen-bvar e params env))
      ((pred-pvar? e) (code-gen-pvar e params env))
      ((pred-fvar? e) (code-gen-fvar e params env))
			(else (error 'code-gen
                    (format "I can't recognize this: ~s" e)))
		)
	)
)

(define tab-stitcher 
	(lambda (str) str)
)
;; indentation handler
;(define tab-stitcher
;	(lambda (str)
;		(letrec ((tab-pusher
;			(lambda (str-from str-new)
;				(let ((str-length (string-length str-from)))
;					(if (equal? str-from "")
;						str-new
;						(if (and (> str-length 1) (equal? (substring str-from 0 1) "\n"))
;							(tab-pusher (substring str-from 1 str-length) (string-append str-new "\n\t"))
;							(tab-pusher (substring str-from 1 str-length) (string-append str-new (substring str-from 0 1)))
;						)
;					))
;			)
;		))
;		(if (and (> (string-length str) 6) (equal? (substring str 0 7) "//begin"))
;			(string-append tab (tab-pusher str ""))
;			(string-append str)
;		))
;	)
;)

(define code-gen-lambda-simple
	(lambda (e params-size env-size)
		(with e
			(lambda (lambda-simple params body)
				(let ((label-cont (^label-lambdaCont))
					(label-exit (^label-lambdaExit))
					(label-EnvBegin (^label-lambdaEnvBegin))
					(label-ArgsBegin (^label-lambdaArgsBegin))
					(label-EnvEnd (^label-lambdaEnvEnd))
					(label-ArgsEnd (^label-lambdaArgsEnd))
				)
					(string-append
						(format "//begin expr: ~a" e) nl
						"//env-size: " (format "~a" env-size) "    params-size: " (format "~a" params-size) nl

						"PUSH(IMM(" (number->string (+ env-size 1)) ")); //new env size: " (number->string (+ env-size 1))  nl
						"CALL(MALLOC);" nl
						"DROP(1);" nl
						"// R1 will hold new increased size env " nl
						"MOV(R1,R0);" nl
						"MOV(R4, IMM(" (number->string env-size) "));" nl
						"CMP(R4, IMM(0));" nl
						"JUMP_EQ(" label-EnvEnd "); " nl
						"MOV(R2, FPARG(0)); //env" nl
						"MOV(R5, IMM(0));" nl
						"MOV(R6, IMM(1));" nl
						label-EnvBegin ":" nl
						tab "MOV(INDD(R1,R6), INDD(R2,R5));" nl
						tab "DECR(R4);" nl
						tab "INCR(R5);" nl
						tab "INCR(R6);" nl
						tab "CMP(R4, IMM(0));" nl
						tab "JUMP_NE(" label-EnvBegin ");" nl
						label-EnvEnd ":" nl

						"// handling with params " nl
						"MOV(R4, IMM(" (number->string params-size) "));" nl
						"CMP(R4, IMM(0));" nl
						"JUMP_EQ(" label-ArgsEnd "); " nl
						"PUSH(IMM(" (number->string params-size) "));" nl
						"CALL(MALLOC);" nl
						"DROP(1);" nl
						"MOV(R3,R0);" nl
						"MOV(R5, IMM(0));" nl
						label-ArgsBegin ":" nl
						tab "MOV(R6,R5);" nl
						tab "ADD(R6, IMM(2));" nl
						tab "MOV(INDD(R3,R5), FPARG(R6));" nl
						tab "DECR(R4);" nl
						tab "INCR(R5);" nl
						tab "CMP(R4, IMM(0));" nl
						tab "JUMP_NE(" label-ArgsBegin ");" nl
						label-ArgsEnd ":" nl

						"MOV(INDD(R1,0), R3); //now R1 holds the environment" nl
						"// done handling with params " nl nl

						"// build the closure" nl
						"PUSH(LABEL(" label-cont "));" nl
						"PUSH(R1);" nl
						"CALL(MAKE_SOB_CLOSURE);" nl
						"DROP(IMM(2));" nl
						"JUMP(" label-exit ");" nl
						;; Body of the lambda, will be referenced only on application
						label-cont ":" nl
						"PUSH(FP);" nl
						"MOV(FP,SP);" nl

						; code-gen the body
						"//body code-gen" nl
						(tab-stitcher (code-gen body (length params) (+ 1 env-size)))
						"//end body code-gen" nl
						"POP(FP);" nl
						"RETURN;" nl
						label-exit ":" nl
						nl


						(format "//end expr: ~a" e) nl
					)
				)

			)
		)
	)
)

(define code-gen-lambda-opt
	(lambda (e params-size env-size)
		(with e
			(lambda (lambda-opt params rest body)
				(let ((label-cont (^label-lambdaCont))
					(label-exit (^label-lambdaExit))
					(label-EnvBegin (^label-lambdaEnvBegin))
					(label-ArgsBegin (^label-lambdaArgsBegin))
					(label-EnvEnd (^label-lambdaEnvEnd))
					(label-ArgsEnd (^label-lambdaArgsEnd))
					(label-correctionBegin (^label-lambdaCorrectionBegin))
					(label-correctionEnd (^label-lambdaCorrectionEnd))
				)
					(string-append
						(format "//begin expr: ~a" e) nl
						"//env-size: " (format "~a" env-size) "    params-size: " (format "~a" params-size) nl

						"PUSH(IMM(" (number->string (+ env-size 1)) ")); //new env size: " (number->string (+ env-size 1))  nl
						"CALL(MALLOC);" nl
						"DROP(1);" nl
						"// R1 will hold new increased size env " nl
						"MOV(R1,R0);" nl
						"MOV(R4, IMM(" (number->string env-size) "));" nl
						"CMP(R4, IMM(0));" nl
						"JUMP_EQ(" label-EnvEnd "); " nl
						"MOV(R2, FPARG(0)); //env" nl
						"MOV(R5, IMM(0));" nl
						"MOV(R6, IMM(1));" nl
						label-EnvBegin ":" nl
						tab "MOV(INDD(R1,R6), INDD(R2,R5));" nl
						tab "DECR(R4);" nl
						tab "INCR(R5);" nl
						tab "INCR(R6);" nl
						tab "CMP(R4, IMM(0));" nl
						tab "JUMP_NE(" label-EnvBegin ");" nl
						label-EnvEnd ":" nl

						"// handling with params " nl
						"MOV(R4, IMM(" (number->string params-size) "));" nl
						"CMP(R4, IMM(0));" nl
						"JUMP_EQ(" label-ArgsEnd "); " nl
						"PUSH(IMM(" (number->string params-size) "));" nl
						"CALL(MALLOC);" nl
						"DROP(1);" nl
						"MOV(R3,R0);" nl
						"MOV(R5, IMM(0));" nl
						label-ArgsBegin ":" nl
						tab "MOV(R6,R5);" nl
						tab "ADD(R6, IMM(2));" nl
						tab "MOV(INDD(R3,R5), FPARG(R6));" nl
						tab "DECR(R4);" nl
						tab "INCR(R5);" nl
						tab "CMP(R4, IMM(0));" nl
						tab "JUMP_NE(" label-ArgsBegin ");" nl
						label-ArgsEnd ":" nl

						"MOV(INDD(R1,0), R3); //now R1 holds the environment" nl
						"// done handling with params " nl nl

						"// build the closure" nl
						"PUSH(LABEL(" label-cont "));" nl
						"PUSH(R1);" nl
						"CALL(MAKE_SOB_CLOSURE);" nl
						"DROP(IMM(2));" nl
						"JUMP(" label-exit ");" nl
						;; Body of the lambda, will be referenced only on application
						label-cont ":" nl
						"PUSH(FP);" nl
						"MOV(FP,SP);" nl

						"//stack correction code" nl
						"//R1 will hold loop size" nl
						"MOV(R1, FPARG(1)); //num of arguments on stack" nl
						"//decrement from R1 the number of params" nl
						"SUB(R1, IMM(" (number->string (length params)) ")); //sub from R1 param size" nl
						"SUB(R1, IMM(1)); //exclude MAGIC BOX" nl
						"MOV(R0, IMM(SOB_NIL)); //end of list" nl
						"CMP(R1, IMM(0));" nl
						"JUMP_EQ(" label-correctionEnd ");" nl
						"//R2 will hold first arg for the list, which is the lowest arg on stack" nl
						"MOV(R2, FPARG(1)); //num of arguments on stack" nl
						label-correctionBegin ":" nl
						tab "PUSH(R0); //second pair arg" nl
						tab "PUSH(FPARG(R2)); //first pair arg" nl
						tab "CALL(MAKE_SOB_PAIR);" nl
						tab "DROP(2);" nl
						tab "DECR(R2); //next arg" nl
						tab "DECR(R1); //next iteration" nl
						tab "CMP(R1, IMM(0));" nl
						tab "JUMP_NE(" label-correctionBegin ");" nl
						label-correctionEnd ":" nl
						"//done making the list. put it in the right position (known at compile time)" nl
						"MOV(FPARG(" (number->string (+ 2 (length params))) "), R0);" nl
						"//end correction" nl
						; code-gen the body
						"//body code-gen" nl
						(tab-stitcher (code-gen body (+ 1 (length params)) (+ 1 env-size)))
						"//end body code-gen" nl
						"POP(FP);" nl
						"RETURN;" nl
						label-exit ":" nl
						nl


						(format "//end expr: ~a" e) nl
					)
				)

			)
		)
	)
)

(define code-gen-lambda-variadic
	(lambda (e params-size env-size)
		(with e
			(lambda (lambda-var params body)
				(let ((label-cont (^label-lambdaCont))
					(label-exit (^label-lambdaExit))
					(label-EnvBegin (^label-lambdaEnvBegin))
					(label-ArgsBegin (^label-lambdaArgsBegin))
					(label-EnvEnd (^label-lambdaEnvEnd))
					(label-ArgsEnd (^label-lambdaArgsEnd))
					(label-correctionBegin (^label-lambdaCorrectionBegin))
					(label-correctionEnd (^label-lambdaCorrectionEnd))
				)
					(string-append
						(format "//begin expr: ~a" e) nl
						"//env-size: " (format "~a" env-size) "    params-size: " (format "~a" params-size) nl

						"PUSH(IMM(" (number->string (+ env-size 1)) ")); //new env size: " (number->string (+ env-size 1))  nl
						"CALL(MALLOC);" nl
						"DROP(1);" nl
						"// R1 will hold new increased size env " nl
						"MOV(R1,R0);" nl
						"MOV(R4, IMM(" (number->string env-size) "));" nl
						"CMP(R4, IMM(0));" nl
						"JUMP_EQ(" label-EnvEnd "); " nl
						"MOV(R2, FPARG(0)); //env" nl
						"MOV(R5, IMM(0));" nl
						"MOV(R6, IMM(1));" nl
						label-EnvBegin ":" nl
						tab "MOV(INDD(R1,R6), INDD(R2,R5));" nl
						tab "DECR(R4);" nl
						tab "INCR(R5);" nl
						tab "INCR(R6);" nl
						tab "CMP(R4, IMM(0));" nl
						tab "JUMP_NE(" label-EnvBegin ");" nl
						label-EnvEnd ":" nl

						"// handling with params " nl
						"MOV(R4, IMM(" (number->string params-size) "));" nl
						"CMP(R4, IMM(0));" nl
						"JUMP_EQ(" label-ArgsEnd "); " nl
						"PUSH(IMM(" (number->string params-size) "));" nl
						"CALL(MALLOC);" nl
						"DROP(1);" nl
						"MOV(R3,R0);" nl
						"MOV(R5, IMM(0));" nl
						label-ArgsBegin ":" nl
						tab "MOV(R6,R5);" nl
						tab "ADD(R6, IMM(2));" nl
						tab "MOV(INDD(R3,R5), FPARG(R6));" nl
						tab "DECR(R4);" nl
						tab "INCR(R5);" nl
						tab "CMP(R4, IMM(0));" nl
						tab "JUMP_NE(" label-ArgsBegin ");" nl
						label-ArgsEnd ":" nl

						"MOV(INDD(R1,0), R3); //now R1 holds the environment" nl
						"// done handling with params " nl nl

						"// build the closure" nl
						"PUSH(LABEL(" label-cont "));" nl
						"PUSH(R1);" nl
						"CALL(MAKE_SOB_CLOSURE);" nl
						"DROP(IMM(2));" nl
						"JUMP(" label-exit ");" nl
						;; Body of the lambda, will be referenced only on application
						label-cont ":" nl
						"PUSH(FP);" nl
						"MOV(FP,SP);" nl

						"//stack correction code" nl
						"//R1 will hold loop size" nl
						"MOV(R1, FPARG(1)); //num of arguments on stack" nl
						"SUB(R1, IMM(1)); //exclude MAGIC BOX" nl
						"MOV(R0, IMM(SOB_NIL)); //end of list" nl
						"CMP(R1, IMM(0));" nl
						"JUMP_EQ(" label-correctionEnd ");" nl
						"//R2 will hold first arg for the list, which is the lowest arg on stack" nl
						"MOV(R2, FPARG(1)); //num of arguments on stack" nl
						label-correctionBegin ":" nl
						tab "PUSH(R0); //second pair arg" nl
						tab "PUSH(FPARG(R2)); //first pair arg" nl
						tab "CALL(MAKE_SOB_PAIR);" nl
						tab "DROP(2);" nl
						tab "DECR(R2); //next arg" nl
						tab "DECR(R1); //next iteration" nl
						tab "CMP(R1, IMM(0));" nl
						tab "JUMP_NE(" label-correctionBegin ");" nl
						label-correctionEnd ":" nl
						"//done making the list. put it in the right position (known at compile time)" nl
						"MOV(FPARG(2), R0);" nl
						"//end correction" nl
						; code-gen the body
						"//body code-gen" nl
						(tab-stitcher (code-gen body 1 (+ 1 env-size)))
						"//end body code-gen" nl
						"POP(FP);" nl
						"RETURN;" nl
						label-exit ":" nl
						nl


						(format "//end expr: ~a" e) nl
					)
				)

			)
		)
	)
)

(define code-gen-applic
	(lambda (e params-size env-size)
		(with e
			(lambda (applic proc args)
				(let* ((arguments (reverse args))
					(label-notProc (^label-notProc))
					(label-exit (^label-applicExit))
					(applic-code (apply string-append (map
														tab-stitcher
														(map
															(lambda (x) (string-append
																			(code-gen x params-size env-size)
																		 	"PUSH(R0);" nl))
															arguments))))
				)
					(string-append
						(format "//begin expr: ~a" e) nl
						"PUSH(IMM(SOB_NIL)); //MAGIC BOX" nl
						applic-code
						"PUSH(IMM(" (number->string (+ 1 (length arguments))) ")); //pushing args size to stack +1 for magic box" nl
						"// done pushing args, now handling proc" nl
						(tab-stitcher (code-gen proc params-size env-size))
						"CMP(INDD(R0,IMM(0)) , T_CLOSURE);" nl
						"JUMP_NE(" label-notProc ");" nl
						"PUSH(INDD(R0,1));  // env" nl
						"CALLA(INDD(R0,2));  //code" nl
						"MOV(R1, STARG(0));" nl
						"ADD(R1, IMM(2));"nl
						"DROP (R1);" nl
						"JUMP(" label-exit ");" nl
						label-notProc ":" nl
						"SHOW(\"Exception: attempt to apply non-procedure \", R0);" nl
						label-exit ":" nl
						(format "//end expr: ~a" e) nl
					)

				)
			)
		)
	)
)

(define code-gen-tc-applic
	(lambda (e params-size env-size)
		(with e
			(lambda (tc-applic proc args)
				(let* ((arguments (reverse args))
					(label-notProc (^label-notProc))
					(label-override (^label-applicOverride))
					(applic-code (apply string-append (map
														tab-stitcher
														(map
															(lambda (x) (string-append
																			(code-gen x params-size env-size)
																		 	"PUSH(R0);" nl))
															arguments))))
				)
					(string-append
						(format "//begin expr: ~a" e) nl
						"PUSH(IMM(SOB_NIL)); //MAGIC BOX" nl
						applic-code
						"PUSH(IMM(" (number->string (+ 1 (length arguments))) ")); //pushing args size to stack +1 for magic box" nl
						"// done pushing args, now handling proc" nl
						(tab-stitcher (code-gen proc params-size env-size))
						"CMP(INDD(R0,IMM(0)) , T_CLOSURE);" nl
						"JUMP_NE(" label-notProc ");" nl
						"PUSH(INDD(R0,1));  // env" nl
						"PUSH(FPARG(-1)); // return address from current frame" nl
						"MOV(R1,FPARG(-2)); // save FP" nl
						"//start overriding old frame" nl
						"MOV(R2, IMM(" (number->string (+ (length arguments) 4)) ")); //R2 holds loop size" nl
						"MOV(R3, FPARG(1)); //number of old arguments" nl
						"MOV(R6, FPARG(1)); //save old args for DROP later" nl
						"ADD(R3,IMM(1)); //R3 points to first old param from FPARG point of view" nl
						"MOV(R4, STARG(1)); //number of new arguments" nl
						"ADD(R4, IMM(1)); //R4 points to first new param from STARG point of view" nl
						label-override ":" nl
						tab "MOV(R5, STARG(R4));" nl
						tab "MOV(FPARG(R3),R5); //overriding" nl
						tab "SUB(R2,1);" nl
						tab "SUB(R3,1); //next old param" nl
						tab "SUB(R4,1); //next new param" nl
						tab "CMP(R2, IMM(0));" nl
						tab "JUMP_NE(" label-override ");" nl
						"//end overriding" nl
						;; we can determine the DROP value at compile time
						"//complete the override by dropping unnecessary items from stack" nl
						"ADD(R6, IMM(4));" nl
						"DROP(R6);" nl
						"MOV(FP,R1); //Restore old FP in preparation of JUMP" nl
						"JUMPA(INDD(R0,2));  //code" nl

						label-notProc ":" nl
						"SHOW(\"Exception: attempt to apply non-procedure \", R0);" nl
						(format "//end expr: ~a" e) nl
					)

				)
			)
		)
	)
)

(define code-gen-seq
	(lambda (e params env)
		(with e
			(lambda (seq seq-body)
				(let ((seq-code (apply string-append (map
														tab-stitcher
														(map (lambda (x) (code-gen x params env)) seq-body)))))
					(string-append
						(format "//begin expr: ~a" e) nl
						seq-code
						(format "//end expr: ~a" e) nl
					)
				)
			)
		)
	)
)

(define code-gen-or
	(lambda (e params env)
		(with e
			(lambda (or or-body)
				(letrec* (
					(label-exit (^label-orExit))
					(w (reverse or-body))
					(last (car w))
					(rest (reverse (cdr w)))
					(or-code
						(lambda (lst)
							(if (null? lst)
								(string-append
									(tab-stitcher (code-gen last params env)) nl
									label-exit ":" nl
								)

								(string-append
									(tab-stitcher (code-gen (car lst) params env)) nl ; when run, the result of the test will be in R0
									"CMP(R0,SOB_FALSE);" nl
									"JUMP_NE(" label-exit ");" nl
									nl
									(or-code (cdr lst))
								)
							)
						)
					))
				  (string-append
				  	(format "//begin expr: ~a" e) nl
				  	(or-code rest)
				  	(format "//end expr: ~a" e) nl
				  )

				)
			)
		)
	)
)

(define code-gen-if3
  (lambda (e params env)
    (with e
     (lambda (if3 test do-if-true do-if-false)
       (let ((code-test (tab-stitcher (code-gen test params env)))
             (code-dit (tab-stitcher (code-gen do-if-true params env)))
             (code-dif (tab-stitcher (code-gen do-if-false params env)))
             (label-else (^label-if3else))
             (label-exit (^label-if3exit)))
		 (string-append
		 	(format "//begin expr: ~a" e) nl
			code-test nl ; when run, the result of the test will be in R0
	        "CMP(R0, SOB_FALSE);" nl
	        "JUMP_EQ(" label-else ");" nl
			code-dit nl
	        "JUMP(" label-exit ");" nl
	        label-else ":" nl
	        code-dif nl
	        label-exit ":" nl
	        (format "//end expr: ~a" e) nl
	    ))))))

(define code-gen-pvar
  (lambda (e params env)
    (with e
      (lambda (pvar var pos)
        (string-append
          (format "//begin expr: ~a" e) nl
          "MOV(R0, FPARG(2 + " (number->string pos) "));" nl
          (format "//end expr: ~a" e) nl
        )
      )
    )
  )
)

(define code-gen-bvar
  (lambda (e params env)
    (with e
      (lambda (bvar var maj min)
        (string-append
          (format "//begin expr: ~a" e) nl
          "MOV(R0, FPARG(0));  //env" nl
          "MOV(R0, INDD(R0, IMM(" (number->string maj) "))); //major" nl
          "MOV(R0, INDD(R0, IMM(" (number->string min) "))); //value" nl
          (format "//end expr: ~a" e) nl
        )
      )
    )
  )
)

(define code-gen-const
	(lambda (e params env)
		(let ((expr (cadr e)))
			(cond
				((null? expr) (string-append "MOV(R0, IMM(SOB_NIL));" nl))
				((equal? expr *void-object*) (string-append "MOV(R0, IMM(SOB_VOID));" nl))
				((boolean? expr)
					(if (eq? expr #t)
						(string-append "MOV(R0, IMM(SOB_TRUE));" nl)
						(string-append "MOV(R0, IMM(SOB_FALSE));" nl)
					)
				)
				((string? expr) )
				((number? expr) )
				((char? expr) )
				(else (error 'code-gen-const
					(format "I can't recognize this: ~s" expr)))
			)
		)

	)
)


;;;;;;;;;;;;;;;; procedure implementation ;;;;;;;;;;;;;;;;;;

;;;;CHECK: not sure. Are there any other procedures which are not closure based? ;;;;
(define ^label-procedure?-true (^^label "L_procedure?_True"))
(define ^label-procedure?-exit (^^label "L_procedure?_Exit"))
(define procedure?_Implement
	(lambda (e)
		(let ((expr (code-gen e))
			(label-true (^label-procedure?-true))
			(label-exit (^label-procedure?-exit))
			)
			(string-append
				(format "//begin expr: ~a" e) nl
				expr nl
				"PUSH(R0);" nl
				"CALL(IS_SOB_CLOSURE);" nl
				"DROP(1);" nl
				"CMP(R0, IMM(1));" nl
				"JUMP_EQ(" label-true ");" nl
				"MOV(R0, SOB_FALSE);" nl
				"JUMP(" label-exit ");" nl
				label-true ":" nl
				"MOV(R0, SOB_TRUE);" nl
				label-exit ":" nl
				(format "//end expr: ~a" e) nl

			)
		)
	)
)

(define ^label-null?-true (^^label "L_null?_True"))
(define ^label-null?-exit (^^label "L_null?_Exit"))
(define null?_Implement
	(lambda (e)
		(let ((expr (code-gen e))
			(label-true (^label-null?-true))
			(label-exit (^label-null?-exit))
			)
			(string-append
				(format "//begin expr: ~a" e) nl
				expr nl
				"PUSH(R0);" nl
				"CALL(IS_SOB_NIL);" nl
				"DROP(1);" nl
				"CMP(R0, IMM(1));" nl
				"JUMP_EQ(" label-true ");" nl
				"MOV(R0, SOB_FALSE);" nl
				"JUMP(" label-exit ");" nl
				label-true ":" nl
				"MOV(R0, SOB_TRUE);" nl
				label-exit ":" nl
				(format "//end expr: ~a" e) nl

			)
		)
	)
)

(define ^label-pair?-true (^^label "L_pair?_True"))
(define ^label-pair?-exit (^^label "L_pair?_Exit"))
(define pair?_Implement
	(lambda (e)
		(let ((expr (code-gen e))
			(label-true (^label-pair?-true))
			(label-exit (^label-pair?-exit))
			)
			(string-append
				(format "//begin expr: ~a" e) nl
				expr nl
				"PUSH(R0);" nl
				"CALL(IS_SOB_PAIR);" nl
				"DROP(1);" nl
				"CMP(R0, IMM(1));" nl
				"JUMP_EQ(" label-true ");" nl
				"MOV(R0, SOB_FALSE);" nl
				"JUMP(" label-exit ");" nl
				label-true ":" nl
				"MOV(R0, SOB_TRUE);" nl
				label-exit ":" nl
				(format "//end expr: ~a" e) nl

			)
		)
	)
)

(define ^label-number?-true (^^label "L_number?_True"))
(define ^label-number?-exit (^^label "L_number?_Exit"))
(define number?_Implement
	(lambda (e)
		(let ((expr (code-gen e))
			(label-true (^label-number?-true))
			(label-exit (^label-number?-exit))
			)
			(string-append
				(format "//begin expr: ~a" e) nl
				expr nl
				"PUSH(R0);" nl
				"CALL(IS_SOB_INTEGER);" nl
				"DROP(1);" nl
				"CMP(R0, IMM(1));" nl
				"JUMP_EQ(" label-true ");" nl
				"MOV(R0, SOB_FALSE);" nl
				"JUMP(" label-exit ");" nl
				label-true ":" nl
				"MOV(R0, SOB_TRUE);" nl
				label-exit ":" nl
				(format "//end expr: ~a" e) nl

			)
		)
	)
)
(define integer?_Implement
	(lambda (e) (number?_Implement e)))

(define ^label-char?-true (^^label "L_char?_True"))
(define ^label-char?-exit (^^label "L_char?_Exit"))
(define char?_Implement
	(lambda (e)
		(let ((expr (code-gen e))
			(label-true (^label-char?-true))
			(label-exit (^label-char?-exit))
			)
			(string-append
				(format "//begin expr: ~a" e) nl
				expr nl
				"PUSH(R0);" nl
				"CALL(IS_SOB_CHAR);" nl
				"DROP(1);" nl
				"CMP(R0, IMM(1));" nl
				"JUMP_EQ(" label-true ");" nl
				"MOV(R0, SOB_FALSE);" nl
				"JUMP(" label-exit ");" nl
				label-true ":" nl
				"MOV(R0, SOB_TRUE);" nl
				label-exit ":" nl
				(format "//end expr: ~a" e) nl

			)
		)
	)
)

(define ^label-boolean?-true (^^label "L_boolean?_True"))
(define ^label-boolean?-exit (^^label "L_boolean?_Exit"))
(define boolean?_Implement
	(lambda (e)
		(let ((expr (code-gen e))
			(label-true (^label-boolean?-true))
			(label-exit (^label-boolean?-exit))
			)
			(string-append
				(format "//begin expr: ~a" e) nl
				expr nl
				"PUSH(R0);" nl
				"CALL(IS_SOB_BOOL);" nl
				"DROP(1);" nl
				"CMP(R0, IMM(1));" nl
				"JUMP_EQ(" label-true ");" nl
				"MOV(R0, SOB_FALSE);" nl
				"JUMP(" label-exit ");" nl
				label-true ":" nl
				"MOV(R0, SOB_TRUE);" nl
				label-exit ":" nl
				(format "//end expr: ~a" e) nl

			)
		)
	)
)

(define ^label-symbol?-true (^^label "L_symbol?_True"))
(define ^label-symbol?-exit (^^label "L_symbol?_Exit"))
(define symbol?_Implement
	(lambda (e)
		(let ((expr (code-gen e))
			(label-true (^label-symbol?-true))
			(label-exit (^label-symbol?-exit))
			)
			(string-append
				(format "//begin expr: ~a" e) nl
				expr nl
				"PUSH(R0);" nl
				"CALL(IS_SOB_SYMBOL);" nl
				"DROP(1);" nl
				"CMP(R0, IMM(1));" nl
				"JUMP_EQ(" label-true ");" nl
				"MOV(R0, SOB_FALSE);" nl
				"JUMP(" label-exit ");" nl
				label-true ":" nl
				"MOV(R0, SOB_TRUE);" nl
				label-exit ":" nl
				(format "//end expr: ~a" e) nl

			)
		)
	)
)

(define ^label-string?-true (^^label "L_string?_True"))
(define ^label-string?-exit (^^label "L_string?_Exit"))
(define string?_Implement
	(lambda (e)
		(let ((expr (code-gen e))
			(label-true (^label-string?-true))
			(label-exit (^label-string?-exit))
			)
			(string-append
				(format "//begin expr: ~a" e) nl
				expr nl
				"PUSH(R0);" nl
				"CALL(IS_SOB_STRING);" nl
				"DROP(1);" nl
				"CMP(R0, IMM(1));" nl
				"JUMP_EQ(" label-true ");" nl
				"MOV(R0, SOB_FALSE);" nl
				"JUMP(" label-exit ");" nl
				label-true ":" nl
				"MOV(R0, SOB_TRUE);" nl
				label-exit ":" nl
				(format "//end expr: ~a" e) nl

			)
		)
	)
)

(define ^label-vector?-true (^^label "L_vector?_True"))
(define ^label-vector?-exit (^^label "L_vector?_Exit"))
(define vector?_Implement
	(lambda (e)
		(let ((expr (code-gen e))
			(label-true (^label-vector?-true))
			(label-exit (^label-vector?-exit))
			)
			(string-append
				(format "//begin expr: ~a" e) nl
				expr nl
				"PUSH(R0);" nl
				"CALL(IS_SOB_VECTOR);" nl
				"DROP(1);" nl
				"CMP(R0, IMM(1));" nl
				"JUMP_EQ(" label-true ");" nl
				"MOV(R0, SOB_FALSE);" nl
				"JUMP(" label-exit ");" nl
				label-true ":" nl
				"MOV(R0, SOB_TRUE);" nl
				label-exit ":" nl
				(format "//end expr: ~a" e) nl

			)
		)
	)
)

(define ^label-zero?-true (^^label "L_zero?_True"))
(define ^label-zero?-exit (^^label "L_zero?_Exit"))
(define zero?_Implement
	(lambda (e)
		(let ((expr (code-gen e))
			(label-true (^label-zero?-true))
			(label-exit (^label-zero?-exit))
			)
			(string-append
				(format "//begin expr: ~a" e) nl
				expr nl
				"PUSH(R0);" nl
				"CALL(IS_ZERO);" nl
				"DROP(1);" nl
				"CMP(R0, IMM(1));" nl
				"JUMP_EQ(" label-true ");" nl
				"MOV(R0, SOB_FALSE);" nl
				"JUMP(" label-exit ");" nl
				label-true ":" nl
				"MOV(R0, SOB_TRUE);" nl
				label-exit ":" nl
				(format "//end expr: ~a" e) nl

			)
		)
	)
)

(define ^label-car-error (^^label "L_car_ERROR"))
(define ^label-car-exit (^^label "L_car_Exit"))
(define car_Implement
	(lambda (e)
		(let ((expr (code-gen e))
			(label-error (^label-car-error))
			(label-exit (^label-car-exit)))

			(string-append
				(format "//begin expr: ~a" e) nl
				expr nl
				"MOV(R1,R0); //save the result" nl
				"PUSH(R0);" nl
				"CALL(IS_SOB_PAIR);" nl
				"DROP(1);" nl
				"CMP(R0, IMM(0));"
				"JUMP_EQ(" label-error ");"
				"MOV(R0, INDD(R1,1));" nl
				"JUMP(" label-exit ");" nl
				label-error ":" nl
				"SHOW(\"Exception in car, This is not a pair: \", R0);" nl
				label-exit ":" nl
				(format "//end expr: ~a" e) nl
			)
		)
	)
)

(define ^label-cdr-error (^^label "L_cdr_ERROR"))
(define ^label-cdr-exit (^^label "L_cdr_Exit"))
(define cdr_Implement
	(lambda (e)
		(let ((expr (code-gen e))
			(label-error (^label-cdr-error))
			(label-exit (^label-cdr-exit)))

			(string-append
				(format "//begin expr: ~a" e) nl
				expr nl
				"MOV(R1,R0); //save the result" nl
				"PUSH(R0);" nl
				"CALL(IS_SOB_PAIR);" nl
				"DROP(1);" nl
				"CMP(R0, IMM(0));"
				"JUMP_EQ(" label-error ");"
				"MOV(R0, INDD(R1,2));" nl
				"JUMP(" label-exit ");" nl
				label-error ":" nl
				"SHOW(\"Exception in cdr, This is not a pair: \", R0);" nl
				label-exit ":" nl
				(format "//end expr: ~a" e) nl
			)
		)
	)
)












