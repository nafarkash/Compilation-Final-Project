#include <stdio.h>
#include <stdlib.h>
/* change to 0 for no debug info to be printed: */
#define DO_SHOW 1
#include "arch/cisc.h"
int main()
{
START_MACHINE;
JUMP(CONTINUE);
#include "arch/char.lib"
#include "arch/io.lib"
#include "arch/math.lib"
#include "arch/string.lib"
#include "arch/system.lib"
#include "arch/scheme.lib"
CONTINUE:
ADD (IND(0), IMM(1000));
MOV (IND(100), IMM(T_VOID));
#define SOB_VOID 100
MOV (IND(101), IMM(T_NIL));
#define SOB_NIL 101
MOV (IND(102), IMM(T_BOOL));
MOV (IND(103), IMM(0));
#define SOB_FALSE 102
MOV (IND(104), IMM(T_BOOL));
MOV (IND(105), IMM(1));
#define SOB_TRUE 104

/* begin of generated code */ 


//begin expr: (applic (lambda-simple (x y z) (seq ((pvar x 0) (pvar y 1) (tc-applic (lambda-simple (a b) (tc-applic (bvar x 0 0) ((const #t) (const #f)))) ((const #t) (const #f)))))) ((lambda-simple (a b) (pvar b 1)) (applic (lambda-simple (c d) (tc-applic (lambda-simple () (tc-applic (lambda-simple () (const #t)) ())) ())) ((const #f) (const #f))) (applic (lambda-variadic x (const #f)) ((const #t) (const #t) (const #t) (const #t)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
	//begin expr: (applic (lambda-variadic x (const #f)) ((const #t) (const #t) (const #t) (const #t)))
	PUSH(IMM(SOB_NIL)); //MAGIC BOX
	MOV(R0, IMM(SOB_TRUE));
	PUSH(R0);
	MOV(R0, IMM(SOB_TRUE));
	PUSH(R0);
	MOV(R0, IMM(SOB_TRUE));
	PUSH(R0);
	MOV(R0, IMM(SOB_TRUE));
	PUSH(R0);
	PUSH(IMM(5)); //pushing args size to stack +1 for magic box
	// done pushing args, now handling proc
		//begin expr: (lambda-variadic x (const #f))
		//env-size: 0    params-size: 0
		PUSH(IMM(1)); //new env size: 1
		CALL(MALLOC);
		DROP(1);
		// R1 will hold new increased size env 
		MOV(R1,R0);
		MOV(R4, IMM(0));
		CMP(R4, IMM(0));
		JUMP_EQ(L_lambda_env_End5); 
		MOV(R2, FPARG(0)); //env
		MOV(R5, IMM(0));
		MOV(R6, IMM(1));
		L_lambda_env_Begin5:
			MOV(INDD(R1,R6), INDD(R2,R5));
			DECR(R4);
			INCR(R5);
			INCR(R6);
			CMP(R4, IMM(0));
			JUMP_NE(L_lambda_env_Begin5);
		L_lambda_env_End5:
		// handling with params 
		MOV(R4, IMM(0));
		CMP(R4, IMM(0));
		JUMP_EQ(L_lambda_args_End5); 
		PUSH(IMM(0));
		CALL(MALLOC);
		DROP(1);
		MOV(R3,R0);
		MOV(R5, IMM(0));
		L_lambda_args_Begin5:
			MOV(R6,R5);
			ADD(R6, IMM(2));
			MOV(INDD(R3,R5), FPARG(R6));
			DECR(R4);
			INCR(R5);
			CMP(R4, IMM(0));
			JUMP_NE(L_lambda_args_Begin5);
		L_lambda_args_End5:
		MOV(INDD(R1,0), R3); //now R1 holds the environment
		// done handling with params 
		
		// build the closure
		PUSH(LABEL(LlambdaCont5));
		PUSH(R1);
		CALL(MAKE_SOB_CLOSURE);
		DROP(IMM(2));
		JUMP(LlambdaExit5);
		LlambdaCont5:
		PUSH(FP);
		MOV(FP,SP);
		//stack correction code
		//R1 will hold loop size
		MOV(R1, FPARG(1)); //num of arguments on stack
		SUB(R1, IMM(1)); //exclude MAGIC BOX
		MOV(R0, IMM(SOB_NIL)); //end of list
		CMP(R1, IMM(0));
		JUMP_EQ(L_lambda_correction_end1);
		//R2 will hold first arg for the list, which is the lowest arg on stack
		MOV(R2, FPARG(1)); //num of arguments on stack
		L_lambda_correction_begin1:
			PUSH(R0); //second pair arg
			PUSH(FPARG(R2)); //first pair arg
			CALL(MAKE_SOB_PAIR);
			DROP(2);
			DECR(R2); //next arg
			DECR(R1); //next iteration
			CMP(R1, IMM(0));
			JUMP_NE(L_lambda_correction_begin1);
		L_lambda_correction_end1:
		//done making the list. put it in the right position (known at compile time)
		MOV(FPARG(2), R0);
		//end correction
		//body code-gen
		MOV(R0, IMM(SOB_FALSE));
		//end body code-gen
		POP(FP);
		RETURN;
		LlambdaExit5:
		
		//end expr: (lambda-variadic x (const #f))
	CMP(INDD(R0,IMM(0)) , T_CLOSURE);
	JUMP_NE(LnotProcedure5);
	PUSH(INDD(R0,1));  // env
	CALLA(INDD(R0,2));  //code
	MOV(R1, STARG(0));
	ADD(R1, IMM(2));
	DROP (R1);
	JUMP(LprocExit3);
	LnotProcedure5:
	SHOW("Exception: attempt to apply non-procedure ", R0);
	LprocExit3:
	//end expr: (applic (lambda-variadic x (const #f)) ((const #t) (const #t) (const #t) (const #t)))
	PUSH(R0);
	//begin expr: (applic (lambda-simple (c d) (tc-applic (lambda-simple () (tc-applic (lambda-simple () (const #t)) ())) ())) ((const #f) (const #f)))
	PUSH(IMM(SOB_NIL)); //MAGIC BOX
	MOV(R0, IMM(SOB_FALSE));
	PUSH(R0);
	MOV(R0, IMM(SOB_FALSE));
	PUSH(R0);
	PUSH(IMM(3)); //pushing args size to stack +1 for magic box
	// done pushing args, now handling proc
		//begin expr: (lambda-simple (c d) (tc-applic (lambda-simple () (tc-applic (lambda-simple () (const #t)) ())) ()))
		//env-size: 0    params-size: 0
		PUSH(IMM(1)); //new env size: 1
		CALL(MALLOC);
		DROP(1);
		// R1 will hold new increased size env 
		MOV(R1,R0);
		MOV(R4, IMM(0));
		CMP(R4, IMM(0));
		JUMP_EQ(L_lambda_env_End2); 
		MOV(R2, FPARG(0)); //env
		MOV(R5, IMM(0));
		MOV(R6, IMM(1));
		L_lambda_env_Begin2:
			MOV(INDD(R1,R6), INDD(R2,R5));
			DECR(R4);
			INCR(R5);
			INCR(R6);
			CMP(R4, IMM(0));
			JUMP_NE(L_lambda_env_Begin2);
		L_lambda_env_End2:
		// handling with params 
		MOV(R4, IMM(0));
		CMP(R4, IMM(0));
		JUMP_EQ(L_lambda_args_End2); 
		PUSH(IMM(0));
		CALL(MALLOC);
		DROP(1);
		MOV(R3,R0);
		MOV(R5, IMM(0));
		L_lambda_args_Begin2:
			MOV(R6,R5);
			ADD(R6, IMM(2));
			MOV(INDD(R3,R5), FPARG(R6));
			DECR(R4);
			INCR(R5);
			CMP(R4, IMM(0));
			JUMP_NE(L_lambda_args_Begin2);
		L_lambda_args_End2:
		MOV(INDD(R1,0), R3); //now R1 holds the environment
		// done handling with params 
		
		// build the closure
		PUSH(LABEL(LlambdaCont2));
		PUSH(R1);
		CALL(MAKE_SOB_CLOSURE);
		DROP(IMM(2));
		JUMP(LlambdaExit2);
		LlambdaCont2:
		PUSH(FP);
		MOV(FP,SP);
		//body code-gen
			//begin expr: (tc-applic (lambda-simple () (tc-applic (lambda-simple () (const #t)) ())) ())
			PUSH(IMM(SOB_NIL)); //MAGIC BOX
			PUSH(IMM(1)); //pushing args size to stack +1 for magic box
			// done pushing args, now handling proc
				//begin expr: (lambda-simple () (tc-applic (lambda-simple () (const #t)) ()))
				//env-size: 1    params-size: 2
				PUSH(IMM(2)); //new env size: 2
				CALL(MALLOC);
				DROP(1);
				// R1 will hold new increased size env 
				MOV(R1,R0);
				MOV(R4, IMM(1));
				CMP(R4, IMM(0));
				JUMP_EQ(L_lambda_env_End3); 
				MOV(R2, FPARG(0)); //env
				MOV(R5, IMM(0));
				MOV(R6, IMM(1));
				L_lambda_env_Begin3:
					MOV(INDD(R1,R6), INDD(R2,R5));
					DECR(R4);
					INCR(R5);
					INCR(R6);
					CMP(R4, IMM(0));
					JUMP_NE(L_lambda_env_Begin3);
				L_lambda_env_End3:
				// handling with params 
				MOV(R4, IMM(2));
				CMP(R4, IMM(0));
				JUMP_EQ(L_lambda_args_End3); 
				PUSH(IMM(2));
				CALL(MALLOC);
				DROP(1);
				MOV(R3,R0);
				MOV(R5, IMM(0));
				L_lambda_args_Begin3:
					MOV(R6,R5);
					ADD(R6, IMM(2));
					MOV(INDD(R3,R5), FPARG(R6));
					DECR(R4);
					INCR(R5);
					CMP(R4, IMM(0));
					JUMP_NE(L_lambda_args_Begin3);
				L_lambda_args_End3:
				MOV(INDD(R1,0), R3); //now R1 holds the environment
				// done handling with params 
				
				// build the closure
				PUSH(LABEL(LlambdaCont3));
				PUSH(R1);
				CALL(MAKE_SOB_CLOSURE);
				DROP(IMM(2));
				JUMP(LlambdaExit3);
				LlambdaCont3:
				PUSH(FP);
				MOV(FP,SP);
				//body code-gen
					//begin expr: (tc-applic (lambda-simple () (const #t)) ())
					PUSH(IMM(SOB_NIL)); //MAGIC BOX
					PUSH(IMM(1)); //pushing args size to stack +1 for magic box
					// done pushing args, now handling proc
						//begin expr: (lambda-simple () (const #t))
						//env-size: 2    params-size: 0
						PUSH(IMM(3)); //new env size: 3
						CALL(MALLOC);
						DROP(1);
						// R1 will hold new increased size env 
						MOV(R1,R0);
						MOV(R4, IMM(2));
						CMP(R4, IMM(0));
						JUMP_EQ(L_lambda_env_End4); 
						MOV(R2, FPARG(0)); //env
						MOV(R5, IMM(0));
						MOV(R6, IMM(1));
						L_lambda_env_Begin4:
							MOV(INDD(R1,R6), INDD(R2,R5));
							DECR(R4);
							INCR(R5);
							INCR(R6);
							CMP(R4, IMM(0));
							JUMP_NE(L_lambda_env_Begin4);
						L_lambda_env_End4:
						// handling with params 
						MOV(R4, IMM(0));
						CMP(R4, IMM(0));
						JUMP_EQ(L_lambda_args_End4); 
						PUSH(IMM(0));
						CALL(MALLOC);
						DROP(1);
						MOV(R3,R0);
						MOV(R5, IMM(0));
						L_lambda_args_Begin4:
							MOV(R6,R5);
							ADD(R6, IMM(2));
							MOV(INDD(R3,R5), FPARG(R6));
							DECR(R4);
							INCR(R5);
							CMP(R4, IMM(0));
							JUMP_NE(L_lambda_args_Begin4);
						L_lambda_args_End4:
						MOV(INDD(R1,0), R3); //now R1 holds the environment
						// done handling with params 
						
						// build the closure
						PUSH(LABEL(LlambdaCont4));
						PUSH(R1);
						CALL(MAKE_SOB_CLOSURE);
						DROP(IMM(2));
						JUMP(LlambdaExit4);
						LlambdaCont4:
						PUSH(FP);
						MOV(FP,SP);
						//body code-gen
						MOV(R0, IMM(SOB_TRUE));
						//end body code-gen
						POP(FP);
						RETURN;
						LlambdaExit4:
						
						//end expr: (lambda-simple () (const #t))
					CMP(INDD(R0,IMM(0)) , T_CLOSURE);
					JUMP_NE(LnotProcedure4);
					PUSH(INDD(R0,1));  // env
					PUSH(FPARG(-1)); // return address from current frame
					MOV(R1,FPARG(-2)); // save FP
					//start overriding old frame
					MOV(R2, IMM(4)); //R2 holds loop size
					MOV(R3, FPARG(1)); //number of old arguments
					MOV(R6, FPARG(1)); //save old args for DROP later
					ADD(R3,IMM(1)); //R3 points to first old param from FPARG point of view
					MOV(R4, STARG(1)); //number of new arguments
					ADD(R4, IMM(1)); //R4 points to first new param from STARG point of view
					LprocOverride2:
						MOV(R5, STARG(R4));
						MOV(FPARG(R3),R5); //overriding
						SUB(R2,1);
						SUB(R3,1); //next old param
						SUB(R4,1); //next new param
						CMP(R2, IMM(0));
						JUMP_NE(LprocOverride2);
					//end overriding
					//complete the override by dropping unnecessary items from stack
					ADD(R6, IMM(4));
					DROP(R6);
					MOV(FP,R1); //Restore old FP in preparation of JUMP
					JUMPA(INDD(R0,2));  //code
					LnotProcedure4:
					SHOW("Exception: attempt to apply non-procedure ", R0);
					//end expr: (tc-applic (lambda-simple () (const #t)) ())
				//end body code-gen
				POP(FP);
				RETURN;
				LlambdaExit3:
				
				//end expr: (lambda-simple () (tc-applic (lambda-simple () (const #t)) ()))
			CMP(INDD(R0,IMM(0)) , T_CLOSURE);
			JUMP_NE(LnotProcedure3);
			PUSH(INDD(R0,1));  // env
			PUSH(FPARG(-1)); // return address from current frame
			MOV(R1,FPARG(-2)); // save FP
			//start overriding old frame
			MOV(R2, IMM(4)); //R2 holds loop size
			MOV(R3, FPARG(1)); //number of old arguments
			MOV(R6, FPARG(1)); //save old args for DROP later
			ADD(R3,IMM(1)); //R3 points to first old param from FPARG point of view
			MOV(R4, STARG(1)); //number of new arguments
			ADD(R4, IMM(1)); //R4 points to first new param from STARG point of view
			LprocOverride1:
				MOV(R5, STARG(R4));
				MOV(FPARG(R3),R5); //overriding
				SUB(R2,1);
				SUB(R3,1); //next old param
				SUB(R4,1); //next new param
				CMP(R2, IMM(0));
				JUMP_NE(LprocOverride1);
			//end overriding
			//complete the override by dropping unnecessary items from stack
			ADD(R6, IMM(4));
			DROP(R6);
			MOV(FP,R1); //Restore old FP in preparation of JUMP
			JUMPA(INDD(R0,2));  //code
			LnotProcedure3:
			SHOW("Exception: attempt to apply non-procedure ", R0);
			//end expr: (tc-applic (lambda-simple () (tc-applic (lambda-simple () (const #t)) ())) ())
		//end body code-gen
		POP(FP);
		RETURN;
		LlambdaExit2:
		
		//end expr: (lambda-simple (c d) (tc-applic (lambda-simple () (tc-applic (lambda-simple () (const #t)) ())) ()))
	CMP(INDD(R0,IMM(0)) , T_CLOSURE);
	JUMP_NE(LnotProcedure2);
	PUSH(INDD(R0,1));  // env
	CALLA(INDD(R0,2));  //code
	MOV(R1, STARG(0));
	ADD(R1, IMM(2));
	DROP (R1);
	JUMP(LprocExit2);
	LnotProcedure2:
	SHOW("Exception: attempt to apply non-procedure ", R0);
	LprocExit2:
	//end expr: (applic (lambda-simple (c d) (tc-applic (lambda-simple () (tc-applic (lambda-simple () (const #t)) ())) ())) ((const #f) (const #f)))
	PUSH(R0);
	//begin expr: (lambda-simple (a b) (pvar b 1))
	//env-size: 0    params-size: 0
	PUSH(IMM(1)); //new env size: 1
	CALL(MALLOC);
	DROP(1);
	// R1 will hold new increased size env 
	MOV(R1,R0);
	MOV(R4, IMM(0));
	CMP(R4, IMM(0));
	JUMP_EQ(L_lambda_env_End1); 
	MOV(R2, FPARG(0)); //env
	MOV(R5, IMM(0));
	MOV(R6, IMM(1));
	L_lambda_env_Begin1:
		MOV(INDD(R1,R6), INDD(R2,R5));
		DECR(R4);
		INCR(R5);
		INCR(R6);
		CMP(R4, IMM(0));
		JUMP_NE(L_lambda_env_Begin1);
	L_lambda_env_End1:
	// handling with params 
	MOV(R4, IMM(0));
	CMP(R4, IMM(0));
	JUMP_EQ(L_lambda_args_End1); 
	PUSH(IMM(0));
	CALL(MALLOC);
	DROP(1);
	MOV(R3,R0);
	MOV(R5, IMM(0));
	L_lambda_args_Begin1:
		MOV(R6,R5);
		ADD(R6, IMM(2));
		MOV(INDD(R3,R5), FPARG(R6));
		DECR(R4);
		INCR(R5);
		CMP(R4, IMM(0));
		JUMP_NE(L_lambda_args_Begin1);
	L_lambda_args_End1:
	MOV(INDD(R1,0), R3); //now R1 holds the environment
	// done handling with params 
	
	// build the closure
	PUSH(LABEL(LlambdaCont1));
	PUSH(R1);
	CALL(MAKE_SOB_CLOSURE);
	DROP(IMM(2));
	JUMP(LlambdaExit1);
	LlambdaCont1:
	PUSH(FP);
	MOV(FP,SP);
	//body code-gen
		//begin expr: (pvar b 1)
		MOV(R0, FPARG(2 + 1));
		//end expr: (pvar b 1)
	//end body code-gen
	POP(FP);
	RETURN;
	LlambdaExit1:
	
	//end expr: (lambda-simple (a b) (pvar b 1))
	PUSH(R0);
PUSH(IMM(4)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
	//begin expr: (lambda-simple (x y z) (seq ((pvar x 0) (pvar y 1) (tc-applic (lambda-simple (a b) (tc-applic (bvar x 0 0) ((const #t) (const #f)))) ((const #t) (const #f))))))
	//env-size: 0    params-size: 0
	PUSH(IMM(1)); //new env size: 1
	CALL(MALLOC);
	DROP(1);
	// R1 will hold new increased size env 
	MOV(R1,R0);
	MOV(R4, IMM(0));
	CMP(R4, IMM(0));
	JUMP_EQ(L_lambda_env_End6); 
	MOV(R2, FPARG(0)); //env
	MOV(R5, IMM(0));
	MOV(R6, IMM(1));
	L_lambda_env_Begin6:
		MOV(INDD(R1,R6), INDD(R2,R5));
		DECR(R4);
		INCR(R5);
		INCR(R6);
		CMP(R4, IMM(0));
		JUMP_NE(L_lambda_env_Begin6);
	L_lambda_env_End6:
	// handling with params 
	MOV(R4, IMM(0));
	CMP(R4, IMM(0));
	JUMP_EQ(L_lambda_args_End6); 
	PUSH(IMM(0));
	CALL(MALLOC);
	DROP(1);
	MOV(R3,R0);
	MOV(R5, IMM(0));
	L_lambda_args_Begin6:
		MOV(R6,R5);
		ADD(R6, IMM(2));
		MOV(INDD(R3,R5), FPARG(R6));
		DECR(R4);
		INCR(R5);
		CMP(R4, IMM(0));
		JUMP_NE(L_lambda_args_Begin6);
	L_lambda_args_End6:
	MOV(INDD(R1,0), R3); //now R1 holds the environment
	// done handling with params 
	
	// build the closure
	PUSH(LABEL(LlambdaCont6));
	PUSH(R1);
	CALL(MAKE_SOB_CLOSURE);
	DROP(IMM(2));
	JUMP(LlambdaExit6);
	LlambdaCont6:
	PUSH(FP);
	MOV(FP,SP);
	//body code-gen
		//begin expr: (seq ((pvar x 0) (pvar y 1) (tc-applic (lambda-simple (a b) (tc-applic (bvar x 0 0) ((const #t) (const #f)))) ((const #t) (const #f)))))
			//begin expr: (pvar x 0)
			MOV(R0, FPARG(2 + 0));
			//end expr: (pvar x 0)
			//begin expr: (pvar y 1)
			MOV(R0, FPARG(2 + 1));
			//end expr: (pvar y 1)
			//begin expr: (tc-applic (lambda-simple (a b) (tc-applic (bvar x 0 0) ((const #t) (const #f)))) ((const #t) (const #f)))
			PUSH(IMM(SOB_NIL)); //MAGIC BOX
			MOV(R0, IMM(SOB_FALSE));
			PUSH(R0);
			MOV(R0, IMM(SOB_TRUE));
			PUSH(R0);
			PUSH(IMM(3)); //pushing args size to stack +1 for magic box
			// done pushing args, now handling proc
				//begin expr: (lambda-simple (a b) (tc-applic (bvar x 0 0) ((const #t) (const #f))))
				//env-size: 1    params-size: 3
				PUSH(IMM(2)); //new env size: 2
				CALL(MALLOC);
				DROP(1);
				// R1 will hold new increased size env 
				MOV(R1,R0);
				MOV(R4, IMM(1));
				CMP(R4, IMM(0));
				JUMP_EQ(L_lambda_env_End7); 
				MOV(R2, FPARG(0)); //env
				MOV(R5, IMM(0));
				MOV(R6, IMM(1));
				L_lambda_env_Begin7:
					MOV(INDD(R1,R6), INDD(R2,R5));
					DECR(R4);
					INCR(R5);
					INCR(R6);
					CMP(R4, IMM(0));
					JUMP_NE(L_lambda_env_Begin7);
				L_lambda_env_End7:
				// handling with params 
				MOV(R4, IMM(3));
				CMP(R4, IMM(0));
				JUMP_EQ(L_lambda_args_End7); 
				PUSH(IMM(3));
				CALL(MALLOC);
				DROP(1);
				MOV(R3,R0);
				MOV(R5, IMM(0));
				L_lambda_args_Begin7:
					MOV(R6,R5);
					ADD(R6, IMM(2));
					MOV(INDD(R3,R5), FPARG(R6));
					DECR(R4);
					INCR(R5);
					CMP(R4, IMM(0));
					JUMP_NE(L_lambda_args_Begin7);
				L_lambda_args_End7:
				MOV(INDD(R1,0), R3); //now R1 holds the environment
				// done handling with params 
				
				// build the closure
				PUSH(LABEL(LlambdaCont7));
				PUSH(R1);
				CALL(MAKE_SOB_CLOSURE);
				DROP(IMM(2));
				JUMP(LlambdaExit7);
				LlambdaCont7:
				PUSH(FP);
				MOV(FP,SP);
				//body code-gen
					//begin expr: (tc-applic (bvar x 0 0) ((const #t) (const #f)))
					PUSH(IMM(SOB_NIL)); //MAGIC BOX
					MOV(R0, IMM(SOB_FALSE));
					PUSH(R0);
					MOV(R0, IMM(SOB_TRUE));
					PUSH(R0);
					PUSH(IMM(3)); //pushing args size to stack +1 for magic box
					// done pushing args, now handling proc
						//begin expr: (bvar x 0 0)
						MOV(R0, FPARG(0));  //env
						MOV(R0, INDD(R0, IMM(0))); //major
						MOV(R0, INDD(R0, IMM(0))); //value
						//end expr: (bvar x 0 0)
					CMP(INDD(R0,IMM(0)) , T_CLOSURE);
					JUMP_NE(LnotProcedure7);
					PUSH(INDD(R0,1));  // env
					PUSH(FPARG(-1)); // return address from current frame
					MOV(R1,FPARG(-2)); // save FP
					//start overriding old frame
					MOV(R2, IMM(6)); //R2 holds loop size
					MOV(R3, FPARG(1)); //number of old arguments
					MOV(R6, FPARG(1)); //save old args for DROP later
					ADD(R3,IMM(1)); //R3 points to first old param from FPARG point of view
					MOV(R4, STARG(1)); //number of new arguments
					ADD(R4, IMM(1)); //R4 points to first new param from STARG point of view
					LprocOverride4:
						MOV(R5, STARG(R4));
						MOV(FPARG(R3),R5); //overriding
						SUB(R2,1);
						SUB(R3,1); //next old param
						SUB(R4,1); //next new param
						CMP(R2, IMM(0));
						JUMP_NE(LprocOverride4);
					//end overriding
					//complete the override by dropping unnecessary items from stack
					ADD(R6, IMM(4));
					DROP(R6);
					MOV(FP,R1); //Restore old FP in preparation of JUMP
					JUMPA(INDD(R0,2));  //code
					LnotProcedure7:
					SHOW("Exception: attempt to apply non-procedure ", R0);
					//end expr: (tc-applic (bvar x 0 0) ((const #t) (const #f)))
				//end body code-gen
				POP(FP);
				RETURN;
				LlambdaExit7:
				
				//end expr: (lambda-simple (a b) (tc-applic (bvar x 0 0) ((const #t) (const #f))))
			CMP(INDD(R0,IMM(0)) , T_CLOSURE);
			JUMP_NE(LnotProcedure6);
			PUSH(INDD(R0,1));  // env
			PUSH(FPARG(-1)); // return address from current frame
			MOV(R1,FPARG(-2)); // save FP
			//start overriding old frame
			MOV(R2, IMM(6)); //R2 holds loop size
			MOV(R3, FPARG(1)); //number of old arguments
			MOV(R6, FPARG(1)); //save old args for DROP later
			ADD(R3,IMM(1)); //R3 points to first old param from FPARG point of view
			MOV(R4, STARG(1)); //number of new arguments
			ADD(R4, IMM(1)); //R4 points to first new param from STARG point of view
			LprocOverride3:
				MOV(R5, STARG(R4));
				MOV(FPARG(R3),R5); //overriding
				SUB(R2,1);
				SUB(R3,1); //next old param
				SUB(R4,1); //next new param
				CMP(R2, IMM(0));
				JUMP_NE(LprocOverride3);
			//end overriding
			//complete the override by dropping unnecessary items from stack
			ADD(R6, IMM(4));
			DROP(R6);
			MOV(FP,R1); //Restore old FP in preparation of JUMP
			JUMPA(INDD(R0,2));  //code
			LnotProcedure6:
			SHOW("Exception: attempt to apply non-procedure ", R0);
			//end expr: (tc-applic (lambda-simple (a b) (tc-applic (bvar x 0 0) ((const #t) (const #f)))) ((const #t) (const #f)))
		//end expr: (seq ((pvar x 0) (pvar y 1) (tc-applic (lambda-simple (a b) (tc-applic (bvar x 0 0) ((const #t) (const #f)))) ((const #t) (const #f)))))
	//end body code-gen
	POP(FP);
	RETURN;
	LlambdaExit6:
	
	//end expr: (lambda-simple (x y z) (seq ((pvar x 0) (pvar y 1) (tc-applic (lambda-simple (a b) (tc-applic (bvar x 0 0) ((const #t) (const #f)))) ((const #t) (const #f))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure1);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit1);
LnotProcedure1:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit1:
//end expr: (applic (lambda-simple (x y z) (seq ((pvar x 0) (pvar y 1) (tc-applic (lambda-simple (a b) (tc-applic (bvar x 0 0) ((const #t) (const #f)))) ((const #t) (const #f)))))) ((lambda-simple (a b) (pvar b 1)) (applic (lambda-simple (c d) (tc-applic (lambda-simple () (tc-applic (lambda-simple () (const #t)) ())) ())) ((const #f) (const #f))) (applic (lambda-variadic x (const #f)) ((const #t) (const #t) (const #t) (const #t)))))
SHOW("exit with ", R0);
STOP_MACHINE;
return 0;
}
