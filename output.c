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


//begin expr: (applic (lambda-simple (x y w z) (tc-applic (lambda-simple (z) (const #t)) ((const #f)))) ((const #t) (const #t) (const #t) (const #t)))
MOV(R0, IMM(SOB_TRUE));
PUSH(R0);
MOV(R0, IMM(SOB_TRUE));
PUSH(R0);
MOV(R0, IMM(SOB_TRUE));
PUSH(R0);
MOV(R0, IMM(SOB_TRUE));
PUSH(R0);
PUSH(IMM(4)); //pushing args size to stack
// done pushing args, now handling proc
	//begin expr: (lambda-simple (x y w z) (tc-applic (lambda-simple (z) (const #t)) ((const #f))))
	//env-size: 0    params-size: 0
	PUSH(IMM(1)); //new env size: 1
	CALL(MALLOC);
	DROP(1);
	// R1 will hold new increased size env 
	MOV(R1,R0);
	MOV(R4, IMM(0));
	CMP(R4, IMM(0));
	JUMP_EQ(LsimForEnd10); 
	MOV(R2, FPARG(0)); //env
	MOV(R5, IMM(0));
	MOV(R6, IMM(1));
	LsimForBegin10:
		MOV(INDD(R1,R6), INDD(R2,R5));
		DECR(R4);
		INCR(R5);
		INCR(R6);
		CMP(R4, IMM(0));
		JUMP_NE(LsimForBegin10);
	LsimForEnd10:
	// handling with params 
	MOV(R4, IMM(0));
	CMP(R4, IMM(0));
	JUMP_EQ(LsimForEnd9); 
	PUSH(IMM(0));
	CALL(MALLOC);
	DROP(1);
	MOV(R3,R0);
	MOV(R5, IMM(0));
	LsimForBegin9:
		MOV(R6,R5);
		ADD(R6, IMM(2));
		MOV(INDD(R3,R5), FPARG(R6));
		DECR(R4);
		INCR(R5);
		CMP(R4, IMM(0));
		JUMP_NE(LsimForBegin9);
	LsimForEnd9:
	MOV(INDD(R1,0), R3); //now R1 holds the environment
	// done handling with params 
	
	// build the closure
	PUSH(LABEL(LsimCont5));
	PUSH(R1);
	CALL(MAKE_SOB_CLOSURE);
	DROP(IMM(2));
	JUMP(LsimExit5);
	LsimCont5:
	PUSH(FP);
	MOV(FP,SP);
	//body code-gen
		//begin expr: (tc-applic (lambda-simple (z) (const #t)) ((const #f)))
		MOV(R0, IMM(SOB_FALSE));
		PUSH(R0);
		PUSH(IMM(1)); //pushing args size to stack
		// done pushing args, now handling proc
			//begin expr: (lambda-simple (z) (const #t))
			//env-size: 1    params-size: 4
			PUSH(IMM(2)); //new env size: 2
			CALL(MALLOC);
			DROP(1);
			// R1 will hold new increased size env 
			MOV(R1,R0);
			MOV(R4, IMM(1));
			CMP(R4, IMM(0));
			JUMP_EQ(LsimForEnd12); 
			MOV(R2, FPARG(0)); //env
			MOV(R5, IMM(0));
			MOV(R6, IMM(1));
			LsimForBegin12:
				MOV(INDD(R1,R6), INDD(R2,R5));
				DECR(R4);
				INCR(R5);
				INCR(R6);
				CMP(R4, IMM(0));
				JUMP_NE(LsimForBegin12);
			LsimForEnd12:
			// handling with params 
			MOV(R4, IMM(4));
			CMP(R4, IMM(0));
			JUMP_EQ(LsimForEnd11); 
			PUSH(IMM(4));
			CALL(MALLOC);
			DROP(1);
			MOV(R3,R0);
			MOV(R5, IMM(0));
			LsimForBegin11:
				MOV(R6,R5);
				ADD(R6, IMM(2));
				MOV(INDD(R3,R5), FPARG(R6));
				DECR(R4);
				INCR(R5);
				CMP(R4, IMM(0));
				JUMP_NE(LsimForBegin11);
			LsimForEnd11:
			MOV(INDD(R1,0), R3); //now R1 holds the environment
			// done handling with params 
			
			// build the closure
			PUSH(LABEL(LsimCont6));
			PUSH(R1);
			CALL(MAKE_SOB_CLOSURE);
			DROP(IMM(2));
			JUMP(LsimExit6);
			LsimCont6:
			PUSH(FP);
			MOV(FP,SP);
			//body code-gen
			MOV(R0, IMM(SOB_TRUE));
			//end body code-gen
			POP(FP);
			RETURN;
			LsimExit6:
			
			//end expr: (lambda-simple (z) (const #t))
		CMP(INDD(R0,IMM(0)) , T_CLOSURE);
		JUMP_NE(LnotProcedure6);
		PUSH(INDD(R0,1));  // env
		PUSH(FPARG(-1)); // return address from current frame
		MOV(R1,FPARG(-2)); // save FP
		//start overriding old frame
		MOV(R2, IMM(4)); //R1 holds loop size
		MOV(R3, FPARG(1)); //number of old arguments
		ADD(R3,IMM(1)); //R3 points to first old param from FPARG point of view
		MOV(R4, STARG(1)); //number of new arguments
		ADD(R4, IMM(1)); //R4 points to first new param from STARG point of view
		LprocOverride3:
		MOV(R5, STARG(R4));MOV(FPARG(R3),R5); //overriding
		SUB(R2,1);
		SUB(R3,1); //next old param
		SUB(R4,1); //next new param
		CMP(R2, IMM(0));
		JUMP_NE(LprocOverride3);
		//end overriding
		//complete the override by dropping unnecessary items from stack
		DROP(IMM(8));
		MOV(FP,R1); //Restore old FP in preparation of JUMP
		JUMPA(INDD(R0,2));  //code
		LnotProcedure6:
		SHOW("Exception: attempt to apply non-procedure ", R0);
		//end expr: (tc-applic (lambda-simple (z) (const #t)) ((const #f)))
	//end body code-gen
	POP(FP);
	RETURN;
	LsimExit5:
	
	//end expr: (lambda-simple (x y w z) (tc-applic (lambda-simple (z) (const #t)) ((const #f))))
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
//end expr: (applic (lambda-simple (x y w z) (tc-applic (lambda-simple (z) (const #t)) ((const #f)))) ((const #t) (const #t) (const #t) (const #t)))
SHOW("exit with ", R0);
STOP_MACHINE;
return 0;
}
