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


//begin expr: (if3 (or ((seq ((const #t) (const #f))) (const #t) (const #f))) (const #t) (const #f))
	//begin expr: (or ((seq ((const #t) (const #f))) (const #t) (const #f)))
		//begin expr: (seq ((const #t) (const #f)))
		MOV(R0, IMM(SOB_TRUE));
		MOV(R0, IMM(SOB_FALSE));
		//end expr: (seq ((const #t) (const #f)))
	
	CMP(R0,SOB_FALSE);
	JUMP_NE(LorExit1);
	
	MOV(R0, IMM(SOB_TRUE));
	
	CMP(R0,SOB_FALSE);
	JUMP_NE(LorExit1);
	
	MOV(R0, IMM(SOB_FALSE));
	
	LorExit1:
	//end expr: (or ((seq ((const #t) (const #f))) (const #t) (const #f)))

CMP(R0, SOB_FALSE);
JUMP_EQ(Lif3else1);
MOV(R0, IMM(SOB_TRUE));

JUMP(Lif3exit1);
Lif3else1:
MOV(R0, IMM(SOB_FALSE));

Lif3exit1:
//end expr: (if3 (or ((seq ((const #t) (const #f))) (const #t) (const #f))) (const #t) (const #f))
SHOW("exit with ", R0);
STOP_MACHINE;
return 0;
}
