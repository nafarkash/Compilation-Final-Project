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


//begin expr: (lambda-simple () (const #t))
//env-size: 0    params-size: 0
PUSH(IMM(1))
(CALL(MALLOC))
MOV(R1,IND(R0))
MOV(R2, FPARG(0)) //env
MOV(R4, IMM(0))
CMP(R4, IMM(0))
JUMP_EQ(LsimForEnd2)
MOV(R5, IMM(0))
MOV(R6, IMM(1))
LsimForBegin2:
	MOV(INDD(R1,R6), INDD(R2,R5))
	DECR(R4)
	INCR(R5)
	INCR(R6)
	CMP(R4, IMM(0))
	JUMP_EQ(LsimForBegin2)
LsimForEnd2:
PUSH(IMM(0))
(CALL(MALLOC))
MOV(R3,IND(R0))
MOV(R4, IMM(0))
CMP(R4, IMM(0))
JUMP_EQ(LsimForEnd1)
MOV(R5, IMM(0))
LsimForBegin1:
MOV(R6,R5)
ADD(R6, IMM(2))
	MOV(INDD(R3,R5), FPARG(R6))
	DECR(R4)
	INCR(R5)
	CMP(R4, IMM(0))
	JUMP_EQ(LsimForBegin1)
LsimForEnd1:
MOV(INDD(R1,0), R3) //now R1 holds the environment
PUSH(IMM(3))
(CALL(MALLOC))
MOV(INDD(R0,0), MAKE_SOB_CLOSURE)
MOV(INDD(R0,1), R1)
MOV(INDD(R0,2), LsimCont1)
JUMP(LsimExit1)
LsimCont1:
PUSH(FP)
(MOV(FP,SP))
//body code-gen
MOV(R0, IMM(SOB_TRUE));
POP(FP)
LsimExit1

//end expr: (lambda-simple () (const #t))
SHOW("exit with ", R0);
STOP_MACHINE;
return 0;
}
