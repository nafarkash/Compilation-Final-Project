/* cisc.c
 * Mock-assembly programming for a CISC-like architecture
 * 
 * Programmer: Zohar Lapidot, 2015
 */

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
#include "arch/Scheme.lib"

CONTINUE:
 ADD(IND(0), IMM(1000));

      MOV(IND(1), IMM(T_VOID));
      #define SOB_VOID 1

      MOV(IND(2), IMM(T_NIL));
      #define SOB_NIL 2

      MOV(IND(3), IMM(T_BOOL));
      MOV(IND(4), IMM(0));

      #define SOB_FALSE 3

      MOV(IND(5), IMM(T_BOOL));
      MOV(IND(6), IMM(1));

      #define SOB_TRUE 5

/*start of (applic (lambda-simple () (const #t)) ((const #t) (const #f)))
/*computing args and pushing them to stack*/
/* Start of (const #f)*/
MOV(R0, IMM(SOB_FALSE));
/* End of (const #f)*/
PUSH(R0);
/* Start of (const #t)*/
MOV(R0, IMM(SOB_TRUE));
/* End of (const #t)*/
PUSH(R0);
PUSH(0);//number of args
/*computing proc*/
/*Start of (lambda-simple () (const #t))*/
PUSH(IMM(1)); /*size of old env plus 1*/
CALL(MALLOC);
DROP(1);
MOV(R1, R0);
//we copy to here the old envMOV(R2, FPARG(0));
//old env/*starting to copy old env*/
MOV(R5,IMM(0));//index for old env
MOV(R6,IMM(1));//index for new env
start_of_copying_old_env2:
CMP(R5,0);/*comparing the counter to the size of the old env*/
JUMP_EQ(end_of_copying_old_env1);
MOV(INDD(R1,R6), INDD(R2,R5));
INCR(R5);
INCR(R6);
JUMP(start_of_copying_old_env2);
end_of_copying_old_env1:
PUSH(IMM(0)); /* size of old params*/
CALL(MALLOC);
DROP(1);
/*start to copy old params*/
MOV(R3, R0);
MOV(R5,IMM(0));
start_of_copying_old_params3:
CMP(R5,0);/*comparing the counter to the old params size*/
JUMP_EQ(end_of_copying_old_params4);
MOV(R7,R5);
ADD(R7,2);
MOV(INDD(R3,R5),FPARG(R7));
INCR(R5);
JUMP(start_of_copying_old_params3);
end_of_copying_old_params4:
MOV(IND(R1),R3);
PUSH(IMM(3));
CALL(MALLOC);
DROP(1);
MOV(IND(R0),T_CLOSURE);
MOV(INDD(R0,1),R1);
MOV(INDD(R0,2),LABEL(body_lable5));
JUMP(end_lambda6);
body_lable5:
PUSH(FP);
MOV(FP,SP);
/* Start of (const #t)*/
MOV(R0, IMM(SOB_TRUE));
/* End of (const #t)*/
POP(FP);
RETURN;
end_lambda6:
/*end of (lambda-simple () (const #t))*/
CMP(IND(R0),T_CLOSURE);//check if this really is a proc
JUMP_NE(not_proc7);
MOV(R6, INDD(R0,1));
PUSH(R6);//push env
CALLA(INDD(R0,2));//call proc code
MOV(R5,STARG(0));
ADD(R5,IMM(2));
DROP(R5);
not_proc7:
/*end of (applic (lambda-simple () (const #t)) ((const #t) (const #f)))*/
SHOW("",R0);
STOP_MACHINE;

  return 0;
}