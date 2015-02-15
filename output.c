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

JUMP(L_procedure?_cont);
L_prim_procedure?:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_CLOSURE);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_procedure?_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_procedure?_Exit);
	L_procedure?_True:
	MOV(R0, SOB_TRUE);
	L_procedure?_Exit:
	POP(FP);
	RETURN;
L_procedure?_cont:
	MOV(IND(2), IMM(T_CLOSURE));
	MOV(IND(3), IMM(451794));
	MOV(IND(4), LABEL(L_prim_procedure?));
#define SOB_PRIM_PROCEDURE? 2
JUMP(L_null?_cont);
L_prim_null?:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_NIL);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_null?_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_null?_Exit);
	L_null?_True:
	MOV(R0, SOB_TRUE);
	L_null?_Exit:
	POP(FP);
	RETURN;
L_null?_cont:
	MOV(IND(5), IMM(T_CLOSURE));
	MOV(IND(6), IMM(544512));
	MOV(IND(7), LABEL(L_prim_null?));
#define SOB_PRIM_NULL? 5
JUMP(L_pair?_cont);
L_prim_pair?:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_PAIR);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_pair?_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_pair?_Exit);
	L_pair?_True:
	MOV(R0, SOB_TRUE);
	L_pair?_Exit:
	POP(FP);
	RETURN;
L_pair?_cont:
	MOV(IND(8), IMM(T_CLOSURE));
	MOV(IND(9), IMM(183403));
	MOV(IND(10), LABEL(L_prim_pair?));
#define SOB_PRIM_PAIR? 8
JUMP(L_number?_cont);
L_prim_number?:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_INTEGER);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_number?_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_number?_Exit);
	L_number?_True:
	MOV(R0, SOB_TRUE);
	L_number?_Exit:
	POP(FP);
	RETURN;
L_number?_cont:
	MOV(IND(11), IMM(T_CLOSURE));
	MOV(IND(12), IMM(101555));
	MOV(IND(13), LABEL(L_prim_number?));
#define SOB_PRIM_NUMBER? 11
JUMP(L_integer?_cont);
L_prim_integer?:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_INTEGER);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_integer?_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_integer?_Exit);
	L_integer?_True:
	MOV(R0, SOB_TRUE);
	L_integer?_Exit:
	POP(FP);
	RETURN;
L_integer?_cont:
	MOV(IND(14), IMM(T_CLOSURE));
	MOV(IND(15), IMM(957412));
	MOV(IND(16), LABEL(L_prim_integer?));
#define SOB_PRIM_INTEGER? 14
JUMP(L_char?_cont);
L_prim_char?:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_CHAR);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_char?_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_char?_Exit);
	L_char?_True:
	MOV(R0, SOB_TRUE);
	L_char?_Exit:
	POP(FP);
	RETURN;
L_char?_cont:
	MOV(IND(17), IMM(T_CLOSURE));
	MOV(IND(18), IMM(645713));
	MOV(IND(19), LABEL(L_prim_char?));
#define SOB_PRIM_CHAR? 17
JUMP(L_boolean?_cont);
L_prim_boolean?:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_BOOL);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_boolean?_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_boolean?_Exit);
	L_boolean?_True:
	MOV(R0, SOB_TRUE);
	L_boolean?_Exit:
	POP(FP);
	RETURN;
L_boolean?_cont:
	MOV(IND(20), IMM(T_CLOSURE));
	MOV(IND(21), IMM(110463));
	MOV(IND(22), LABEL(L_prim_boolean?));
#define SOB_PRIM_BOOLEAN? 20
JUMP(L_symbol?_cont);
L_prim_symbol?:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_SYMBOL);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_symbol?_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_symbol?_Exit);
	L_symbol?_True:
	MOV(R0, SOB_TRUE);
	L_symbol?_Exit:
	POP(FP);
	RETURN;
L_symbol?_cont:
	MOV(IND(23), IMM(T_CLOSURE));
	MOV(IND(24), IMM(358902));
	MOV(IND(25), LABEL(L_prim_symbol?));
#define SOB_PRIM_SYMBOL? 23
JUMP(L_string?_cont);
L_prim_string?:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_STRING);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_string?_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_string?_Exit);
	L_string?_True:
	MOV(R0, SOB_TRUE);
	L_string?_Exit:
	POP(FP);
	RETURN;
L_string?_cont:
	MOV(IND(26), IMM(T_CLOSURE));
	MOV(IND(27), IMM(511179));
	MOV(IND(28), LABEL(L_prim_string?));
#define SOB_PRIM_STRING? 26
JUMP(L_vector?_cont);
L_prim_vector?:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_VECTOR);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_vector?_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_vector?_Exit);
	L_vector?_True:
	MOV(R0, SOB_TRUE);
	L_vector?_Exit:
	POP(FP);
	RETURN;
L_vector?_cont:
	MOV(IND(29), IMM(T_CLOSURE));
	MOV(IND(30), IMM(615181));
	MOV(IND(31), LABEL(L_prim_vector?));
#define SOB_PRIM_VECTOR? 29
JUMP(L_zero?_cont);
L_prim_zero?:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_ZERO);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_zero?_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_zero?_Exit);
	L_zero?_True:
	MOV(R0, SOB_TRUE);
	L_zero?_Exit:
	POP(FP);
	RETURN;
L_zero?_cont:
	MOV(IND(32), IMM(T_CLOSURE));
	MOV(IND(33), IMM(602995));
	MOV(IND(34), LABEL(L_prim_zero?));
#define SOB_PRIM_ZERO? 32
JUMP(L_car_cont);
L_prim_car:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_PAIR);
	DROP(1);
	CMP(R0, IMM(0));
	JUMP_EQ(L_car_ERROR);
	MOV(R0, INDD(FPARG(2),1));
	JUMP(L_car_Exit);
	L_car_ERROR:
	SHOW("Exception in car, This is not a pair: ", R0);
	L_car_Exit:
	POP(FP);
	RETURN;
L_car_cont:
	MOV(IND(35), IMM(T_CLOSURE));
	MOV(IND(36), IMM(921183));
	MOV(IND(37), LABEL(L_prim_car));
#define SOB_PRIM_CAR 35
JUMP(L_cdr_cont);
L_prim_cdr:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_PAIR);
	DROP(1);
	CMP(R0, IMM(0));
	JUMP_EQ(L_cdr_ERROR);
	MOV(R0, INDD(FPARG(2),1));
	JUMP(L_cdr_Exit);
	L_cdr_ERROR:
	SHOW("Exception in cdr, This is not a pair: ", R0);
	L_cdr_Exit:
	POP(FP);
	RETURN;
L_cdr_cont:
	MOV(IND(38), IMM(T_CLOSURE));
	MOV(IND(39), IMM(685967));
	MOV(IND(40), LABEL(L_prim_cdr));
#define SOB_PRIM_CDR 38

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


//begin expr: (applic (lambda-simple (x) (pvar x 0)) ((const #t)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
MOV(R0, IMM(SOB_TRUE));
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (x) (pvar x 0))
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
//begin expr: (pvar x 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar x 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit1:

//end expr: (lambda-simple (x) (pvar x 0))
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
//end expr: (applic (lambda-simple (x) (pvar x 0)) ((const #t)))
SHOW("exit with ", R0);
STOP_MACHINE;
return 0;
}
