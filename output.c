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


//begin expr: (applic (lambda-simple (x y) (lambda-simple () (const #t))) ((const #t) (const #f)))
MOV(R0, IMM(SOB_FALSE));
PUSH(R0);
MOV(R0, IMM(SOB_TRUE));
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack
// done pushing args, now handling proc
	//begin expr: (lambda-simple (x y) (lambda-simple () (const #t)))
	//env-size: 0    params-size: 0
	PUSH(IMM(1)); //new env size: 1
	CALL(MALLOC);
	DROP(1);
	// R1 will hold new increased size env 
	MOV(R1,R0);
	MOV(R4, IMM(0));
	CMP(R4, IMM(0));
	JUMP_EQ(LsimForEnd6); 
	MOV(R2, FPARG(0)); //env
	MOV(R5, IMM(0));
	MOV(R6, IMM(1));
	LsimForBegin6:
		MOV(INDD(R1,R6), INDD(R2,R5));
		DECR(R4);
		INCR(R5);
		INCR(R6);
		CMP(R4, IMM(0));
		JUMP_NE(LsimForBegin6);
	LsimForEnd6:
	// handling with params 
	MOV(R4, IMM(0));
	CMP(R4, IMM(0));
	JUMP_EQ(LsimForEnd5); 
	PUSH(IMM(0));
	CALL(MALLOC);
	DROP(1);
	MOV(R3,R0);
	MOV(R5, IMM(0));
	LsimForBegin5:
		MOV(R6,R5);
		ADD(R6, IMM(2));
		MOV(INDD(R3,R5), FPARG(R6));
		DECR(R4);
		INCR(R5);
		CMP(R4, IMM(0));
		JUMP_NE(LsimForBegin5);
	LsimForEnd5:
	MOV(INDD(R1,0), R3); //now R1 holds the environment
	// done handling with params 
	
	// build the closure
	PUSH(LABEL(LsimCont3));
	PUSH(R1);
	CALL(MAKE_SOB_CLOSURE);
	DROP(IMM(2));
	JUMP(LsimExit3);
	LsimCont3:
	PUSH(FP);
	MOV(FP,SP);
	//body code-gen
		//begin expr: (lambda-simple () (const #t))
		//env-size: 1    params-size: 2
		PUSH(IMM(2)); //new env size: 2
		CALL(MALLOC);
		DROP(1);
		// R1 will hold new increased size env 
		MOV(R1,R0);
		MOV(R4, IMM(1));
		CMP(R4, IMM(0));
		JUMP_EQ(LsimForEnd8); 
		MOV(R2, FPARG(0)); //env
		MOV(R5, IMM(0));
		MOV(R6, IMM(1));
		LsimForBegin8:
			MOV(INDD(R1,R6), INDD(R2,R5));
			DECR(R4);
			INCR(R5);
			INCR(R6);
			CMP(R4, IMM(0));
			JUMP_NE(LsimForBegin8);
		LsimForEnd8:
		// handling with params 
		MOV(R4, IMM(2));
		CMP(R4, IMM(0));
		JUMP_EQ(LsimForEnd7); 
		PUSH(IMM(2));
		CALL(MALLOC);
		DROP(1);
		MOV(R3,R0);
		MOV(R5, IMM(0));
		LsimForBegin7:
			MOV(R6,R5);
			ADD(R6, IMM(2));
			MOV(INDD(R3,R5), FPARG(R6));
			DECR(R4);
			INCR(R5);
			CMP(R4, IMM(0));
			JUMP_NE(LsimForBegin7);
		LsimForEnd7:
		MOV(INDD(R1,0), R3); //now R1 holds the environment
		// done handling with params 
		
		// build the closure
		PUSH(LABEL(LsimCont4));
		PUSH(R1);
		CALL(MAKE_SOB_CLOSURE);
		DROP(IMM(2));
		JUMP(LsimExit4);
		LsimCont4:
		PUSH(FP);
		MOV(FP,SP);
		//body code-gen
		MOV(R0, IMM(SOB_TRUE));
		//end body code-gen
		POP(FP);
		RETURN;
		LsimExit4:
		
		//end expr: (lambda-simple () (const #t))
	//end body code-gen
	POP(FP);
	RETURN;
	LsimExit3:
	
	//end expr: (lambda-simple (x y) (lambda-simple () (const #t)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure3);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));ADD(R1, IMM(2));DROP (R1);
JUMP(LprocExit3);
LnotProcedure3:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit3:
//end expr: (applic (lambda-simple (x y) (lambda-simple () (const #t))) ((const #t) (const #f)))
SHOW("exit with ", R0);
STOP_MACHINE;
return 0;
}
