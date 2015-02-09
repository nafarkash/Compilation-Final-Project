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


//begin expr: (applic (lambda-opt (a b c) d (const #t)) ((const #t) (const #t) (const #t)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
MOV(R0, IMM(SOB_TRUE));
PUSH(R0);
MOV(R0, IMM(SOB_TRUE));
PUSH(R0);
MOV(R0, IMM(SOB_TRUE));
PUSH(R0);
PUSH(IMM(4)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
	//begin expr: (lambda-opt (a b c) d (const #t))
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
	//stack correction code
	//R1 will hold loop size
	MOV(R1, FPARG(1)); //num of arguments on stack
	//decrement from R1 the number of params
	SUB(R1, IMM(3)); //sub from R1 param size
	SUB(R1, IMM(1)); //exclude MAGIC BOX
	MOV(R0, IMM(SOB_NIL)); //end of list
	CMP(R1, IMM(0));
	JUMP_EQ(L_lambda_correction_end2);
	//R2 will hold first arg for the list, which is the lowest arg on stack
	MOV(R2, FPARG(1)); //num of arguments on stack
	L_lambda_correction_begin2:
		PUSH(R0); //second pair arg
		PUSH(FPARG(R2)); //first pair arg
		CALL(MAKE_SOB_PAIR);
		DROP(2);
		DECR(R2); //next arg
		DECR(R1); //next iteration
		CMP(R1, IMM(0));
		JUMP_NE(L_lambda_correction_begin2);
	L_lambda_correction_end2:
	//done making the list. put it in the right position (known at compile time)
	MOV(FPARG(5), R0);
	//end correction
	//body code-gen
	MOV(R0, IMM(SOB_TRUE));
	//end body code-gen
	POP(FP);
	RETURN;
	LlambdaExit2:
	
	//end expr: (lambda-opt (a b c) d (const #t))
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
//end expr: (applic (lambda-opt (a b c) d (const #t)) ((const #t) (const #t) (const #t)))
SHOW("exit with ", R0);
STOP_MACHINE;
return 0;
}
