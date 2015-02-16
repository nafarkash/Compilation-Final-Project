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

/* primitive procedure?  */
JUMP(L_procedure_cont);
L_prim_procedure:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_CLOSURE);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_procedure_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_procedure_Exit);
	L_procedure_True:
	MOV(R0, SOB_TRUE);
	L_procedure_Exit:
	POP(FP);
	RETURN;
L_procedure_cont:
	MOV(IND(2), IMM(T_CLOSURE));
	MOV(IND(3), IMM(451794));
	MOV(IND(4), LABEL(L_prim_procedure));
#define SOB_PRIM_PROCEDURE 2
/* primitive null?  */
JUMP(L_null_cont);
L_prim_null:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_NIL);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_null_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_null_Exit);
	L_null_True:
	MOV(R0, SOB_TRUE);
	L_null_Exit:
	POP(FP);
	RETURN;
L_null_cont:
	MOV(IND(5), IMM(T_CLOSURE));
	MOV(IND(6), IMM(544512));
	MOV(IND(7), LABEL(L_prim_null));
#define SOB_PRIM_NULL 5
/* primitive pair?  */
JUMP(L_pair_cont);
L_prim_pair:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_PAIR);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_pair_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_pair_Exit);
	L_pair_True:
	MOV(R0, SOB_TRUE);
	L_pair_Exit:
	POP(FP);
	RETURN;
L_pair_cont:
	MOV(IND(8), IMM(T_CLOSURE));
	MOV(IND(9), IMM(183403));
	MOV(IND(10), LABEL(L_prim_pair));
#define SOB_PRIM_PAIR 8
/* primitive number?  */
JUMP(L_number_cont);
L_prim_number:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_INTEGER);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_number_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_number_Exit);
	L_number_True:
	MOV(R0, SOB_TRUE);
	L_number_Exit:
	POP(FP);
	RETURN;
L_number_cont:
	MOV(IND(11), IMM(T_CLOSURE));
	MOV(IND(12), IMM(101555));
	MOV(IND(13), LABEL(L_prim_number));
#define SOB_PRIM_NUMBER 11
/* primitive integer?  */
JUMP(L_integer_cont);
L_prim_integer:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_INTEGER);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_integer_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_integer_Exit);
	L_integer_True:
	MOV(R0, SOB_TRUE);
	L_integer_Exit:
	POP(FP);
	RETURN;
L_integer_cont:
	MOV(IND(14), IMM(T_CLOSURE));
	MOV(IND(15), IMM(957412));
	MOV(IND(16), LABEL(L_prim_integer));
#define SOB_PRIM_INTEGER 14
/* primitive char?  */
JUMP(L_char_cont);
L_prim_char:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_CHAR);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_char_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_char_Exit);
	L_char_True:
	MOV(R0, SOB_TRUE);
	L_char_Exit:
	POP(FP);
	RETURN;
L_char_cont:
	MOV(IND(17), IMM(T_CLOSURE));
	MOV(IND(18), IMM(645713));
	MOV(IND(19), LABEL(L_prim_char));
#define SOB_PRIM_CHAR 17
/* primitive boolean?  */
JUMP(L_boolean_cont);
L_prim_boolean:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_BOOL);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_boolean_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_boolean_Exit);
	L_boolean_True:
	MOV(R0, SOB_TRUE);
	L_boolean_Exit:
	POP(FP);
	RETURN;
L_boolean_cont:
	MOV(IND(20), IMM(T_CLOSURE));
	MOV(IND(21), IMM(110463));
	MOV(IND(22), LABEL(L_prim_boolean));
#define SOB_PRIM_BOOLEAN 20
/* primitive symbol?  */
JUMP(L_symbol_cont);
L_prim_symbol:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_SYMBOL);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_symbol_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_symbol_Exit);
	L_symbol_True:
	MOV(R0, SOB_TRUE);
	L_symbol_Exit:
	POP(FP);
	RETURN;
L_symbol_cont:
	MOV(IND(23), IMM(T_CLOSURE));
	MOV(IND(24), IMM(358902));
	MOV(IND(25), LABEL(L_prim_symbol));
#define SOB_PRIM_SYMBOL 23
/* primitive string?  */
JUMP(L_string_cont);
L_prim_string:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_STRING);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_string_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_string_Exit);
	L_string_True:
	MOV(R0, SOB_TRUE);
	L_string_Exit:
	POP(FP);
	RETURN;
L_string_cont:
	MOV(IND(26), IMM(T_CLOSURE));
	MOV(IND(27), IMM(511179));
	MOV(IND(28), LABEL(L_prim_string));
#define SOB_PRIM_STRING 26
/* primitive vector?  */
JUMP(L_vector_cont);
L_prim_vector:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_VECTOR);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_vector_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_vector_Exit);
	L_vector_True:
	MOV(R0, SOB_TRUE);
	L_vector_Exit:
	POP(FP);
	RETURN;
L_vector_cont:
	MOV(IND(29), IMM(T_CLOSURE));
	MOV(IND(30), IMM(615181));
	MOV(IND(31), LABEL(L_prim_vector));
#define SOB_PRIM_VECTOR 29
/* primitive zero?  */
JUMP(L_zero_cont);
L_prim_zero:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_ZERO);
	DROP(1);
	CMP(R0, IMM(1));
	JUMP_EQ(L_zero_True);
	MOV(R0, SOB_FALSE);
	JUMP(L_zero_Exit);
	L_zero_True:
	MOV(R0, SOB_TRUE);
	L_zero_Exit:
	POP(FP);
	RETURN;
L_zero_cont:
	MOV(IND(32), IMM(T_CLOSURE));
	MOV(IND(33), IMM(602995));
	MOV(IND(34), LABEL(L_prim_zero));
#define SOB_PRIM_ZERO 32
/* primitive car  */
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
/* primitive cdr  */
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
/* primitive cons  */
JUMP(L_cons_cont);
L_prim_cons:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(3)); // The cdr
	PUSH(FPARG(2)); // The car
	CALL(MAKE_SOB_PAIR);
	DROP(2);
	POP(FP);
	RETURN;
L_cons_cont:
	MOV(IND(41), IMM(T_CLOSURE));
	MOV(IND(42), IMM(286949));
	MOV(IND(43), LABEL(L_prim_cons));
#define SOB_PRIM_CONS 41

/* begin of generated code */ 


//begin expr: (applic (applic (applic (applic (lambda-simple (x) (tc-applic (pvar x 0) ((applic (pvar x 0) ((pvar x 0)))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (x) (lambda-simple (y) (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0))))))))))) ((lambda-simple (x) (tc-applic (applic (pvar x 0) ((const #t))) ((const #f)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))
//env-size: 0    params-size: 0
PUSH(IMM(1)); //new env size: 1
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End143); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin143:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin143);
L_lambda_env_End143:
// handling with params 
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End143); 
PUSH(IMM(0));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin143:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin143);
L_lambda_args_End143:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont143));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit143);
LlambdaCont143:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (bvar x 0 0))
//env-size: 1    params-size: 1
PUSH(IMM(2)); //new env size: 2
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End144); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin144:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin144);
L_lambda_env_End144:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End144); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin144:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin144);
L_lambda_args_End144:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont144));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit144);
LlambdaCont144:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (bvar x 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar x 0 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit144:

//end expr: (lambda-simple (y) (bvar x 0 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit143:

//end expr: (lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (applic (applic (lambda-simple (x) (tc-applic (pvar x 0) ((applic (pvar x 0) ((pvar x 0)))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (x) (lambda-simple (y) (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0))))))))))) ((lambda-simple (x) (tc-applic (applic (pvar x 0) ((const #t))) ((const #f))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (tc-applic (applic (pvar x 0) ((const #t))) ((const #f))))
//env-size: 0    params-size: 0
PUSH(IMM(1)); //new env size: 1
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End145); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin145:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin145);
L_lambda_env_End145:
// handling with params 
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End145); 
PUSH(IMM(0));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin145:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin145);
L_lambda_args_End145:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont145));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit145);
LlambdaCont145:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (pvar x 0) ((const #t))) ((const #f)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
MOV(R0, IMM(SOB_FALSE));
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar x 0) ((const #t)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
MOV(R0, IMM(SOB_TRUE));
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar x 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar x 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure151);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit100);
LnotProcedure151:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit100:
//end expr: (applic (pvar x 0) ((const #t)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure150);
PUSH(INDD(R0,1));  // env
PUSH(FPARG(-1)); // return address from current frame
MOV(R1,FPARG(-2)); // save FP
//start overriding old frame
MOV(R2, IMM(5)); //R2 holds loop size
MOV(R3, FPARG(1)); //number of old arguments
MOV(R6, FPARG(1)); //save old args for DROP later
ADD(R3,IMM(1)); //R3 points to first old param from FPARG point of view
MOV(R4, STARG(1)); //number of new arguments
ADD(R4, IMM(1)); //R4 points to first new param from STARG point of view
LprocOverride51:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride51);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure150:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (pvar x 0) ((const #t))) ((const #f)))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit145:

//end expr: (lambda-simple (x) (tc-applic (applic (pvar x 0) ((const #t))) ((const #f))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (applic (lambda-simple (x) (tc-applic (pvar x 0) ((applic (pvar x 0) ((pvar x 0)))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (x) (lambda-simple (y) (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0)))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (x) (lambda-simple (y) (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0)))))))))
//env-size: 0    params-size: 0
PUSH(IMM(1)); //new env size: 1
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End146); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin146:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin146);
L_lambda_env_End146:
// handling with params 
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End146); 
PUSH(IMM(0));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin146:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin146);
L_lambda_args_End146:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont146));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit146);
LlambdaCont146:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (pvar p 0) ((lambda-simple (x) (lambda-simple (y) (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0))))))
//env-size: 1    params-size: 1
PUSH(IMM(2)); //new env size: 2
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End147); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin147:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin147);
L_lambda_env_End147:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End147); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin147:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin147);
L_lambda_args_End147:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont147));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit147);
LlambdaCont147:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0)))))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End148); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin148:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin148);
L_lambda_env_End148:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End148); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin148:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin148);
L_lambda_args_End148:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont148));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit148);
LlambdaCont148:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0))))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End149); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin149:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin149);
L_lambda_env_End149:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End149); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin149:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin149);
L_lambda_args_End149:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont149));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit149);
LlambdaCont149:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar x 1 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(1))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar x 1 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar z 0) ((bvar y 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar y 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar y 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar z 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar z 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure155);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit102);
LnotProcedure155:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit102:
//end expr: (applic (pvar z 0) ((bvar y 0 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure154);
PUSH(INDD(R0,1));  // env
PUSH(FPARG(-1)); // return address from current frame
MOV(R1,FPARG(-2)); // save FP
//start overriding old frame
MOV(R2, IMM(5)); //R2 holds loop size
MOV(R3, FPARG(1)); //number of old arguments
MOV(R6, FPARG(1)); //save old args for DROP later
ADD(R3,IMM(1)); //R3 points to first old param from FPARG point of view
MOV(R4, STARG(1)); //number of new arguments
ADD(R4, IMM(1)); //R4 points to first new param from STARG point of view
LprocOverride53:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride53);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure154:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0)))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit149:

//end expr: (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit148:

//end expr: (lambda-simple (y) (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit147:

//end expr: (lambda-simple (x) (lambda-simple (y) (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure153);
PUSH(INDD(R0,1));  // env
PUSH(FPARG(-1)); // return address from current frame
MOV(R1,FPARG(-2)); // save FP
//start overriding old frame
MOV(R2, IMM(5)); //R2 holds loop size
MOV(R3, FPARG(1)); //number of old arguments
MOV(R6, FPARG(1)); //save old args for DROP later
ADD(R3,IMM(1)); //R3 points to first old param from FPARG point of view
MOV(R4, STARG(1)); //number of new arguments
ADD(R4, IMM(1)); //R4 points to first new param from STARG point of view
LprocOverride52:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride52);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure153:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (pvar p 0) ((lambda-simple (x) (lambda-simple (y) (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0))))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit146:

//end expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (x) (lambda-simple (y) (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0)))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (lambda-simple (x) (tc-applic (pvar x 0) ((applic (pvar x 0) ((pvar x 0)))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))
//env-size: 0    params-size: 0
PUSH(IMM(1)); //new env size: 1
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End150); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin150:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin150);
L_lambda_env_End150:
// handling with params 
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End150); 
PUSH(IMM(0));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin150:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin150);
L_lambda_args_End150:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont150));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit150);
LlambdaCont150:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))
//env-size: 1    params-size: 1
PUSH(IMM(2)); //new env size: 2
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End151); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin151:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin151);
L_lambda_env_End151:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End151); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin151:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin151);
L_lambda_args_End151:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont151));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit151);
LlambdaCont151:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (bvar x 0 0) ((pvar y 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar y 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar y 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar x 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar x 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure158);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit104);
LnotProcedure158:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit104:
//end expr: (applic (bvar x 0 0) ((pvar y 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar x 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar x 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure157);
PUSH(INDD(R0,1));  // env
PUSH(FPARG(-1)); // return address from current frame
MOV(R1,FPARG(-2)); // save FP
//start overriding old frame
MOV(R2, IMM(5)); //R2 holds loop size
MOV(R3, FPARG(1)); //number of old arguments
MOV(R6, FPARG(1)); //save old args for DROP later
ADD(R3,IMM(1)); //R3 points to first old param from FPARG point of view
MOV(R4, STARG(1)); //number of new arguments
ADD(R4, IMM(1)); //R4 points to first new param from STARG point of view
LprocOverride54:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride54);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure157:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit151:

//end expr: (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit150:

//end expr: (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (x) (tc-applic (pvar x 0) ((applic (pvar x 0) ((pvar x 0))))))
//env-size: 0    params-size: 0
PUSH(IMM(1)); //new env size: 1
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End152); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin152:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin152);
L_lambda_env_End152:
// handling with params 
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End152); 
PUSH(IMM(0));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin152:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin152);
L_lambda_args_End152:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont152));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit152);
LlambdaCont152:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (pvar x 0) ((applic (pvar x 0) ((pvar x 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (pvar x 0) ((pvar x 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar x 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar x 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar x 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar x 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure160);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit105);
LnotProcedure160:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit105:
//end expr: (applic (pvar x 0) ((pvar x 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar x 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar x 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure159);
PUSH(INDD(R0,1));  // env
PUSH(FPARG(-1)); // return address from current frame
MOV(R1,FPARG(-2)); // save FP
//start overriding old frame
MOV(R2, IMM(5)); //R2 holds loop size
MOV(R3, FPARG(1)); //number of old arguments
MOV(R6, FPARG(1)); //save old args for DROP later
ADD(R3,IMM(1)); //R3 points to first old param from FPARG point of view
MOV(R4, STARG(1)); //number of new arguments
ADD(R4, IMM(1)); //R4 points to first new param from STARG point of view
LprocOverride55:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride55);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure159:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (pvar x 0) ((applic (pvar x 0) ((pvar x 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit152:

//end expr: (lambda-simple (x) (tc-applic (pvar x 0) ((applic (pvar x 0) ((pvar x 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure156);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit103);
LnotProcedure156:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit103:
//end expr: (applic (lambda-simple (x) (tc-applic (pvar x 0) ((applic (pvar x 0) ((pvar x 0)))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure152);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit101);
LnotProcedure152:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit101:
//end expr: (applic (applic (lambda-simple (x) (tc-applic (pvar x 0) ((applic (pvar x 0) ((pvar x 0)))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (x) (lambda-simple (y) (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0)))))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure149);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit99);
LnotProcedure149:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit99:
//end expr: (applic (applic (applic (lambda-simple (x) (tc-applic (pvar x 0) ((applic (pvar x 0) ((pvar x 0)))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (x) (lambda-simple (y) (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0))))))))))) ((lambda-simple (x) (tc-applic (applic (pvar x 0) ((const #t))) ((const #f))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure148);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit98);
LnotProcedure148:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit98:
//end expr: (applic (applic (applic (applic (lambda-simple (x) (tc-applic (pvar x 0) ((applic (pvar x 0) ((pvar x 0)))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (x) (lambda-simple (y) (lambda-simple (z) (tc-applic (applic (pvar z 0) ((bvar y 0 0))) ((bvar x 1 0))))))))))) ((lambda-simple (x) (tc-applic (applic (pvar x 0) ((const #t))) ((const #f)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))
SHOW("exit with ", R0);
STOP_MACHINE;
return 0;
}
