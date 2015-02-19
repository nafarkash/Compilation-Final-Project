#include <stdio.h>
#include <stdlib.h>
/* change to 0 for no debug info to be printed: */
#define DO_SHOW 1
#include "arch/cisc.h"
#include "arch/debug_macros.h"
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
#define SOB_VOID 100
#define SOB_NIL 101
#define SOB_FALSE 102
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
	MOV(IND(1), IMM(T_CLOSURE));
	MOV(IND(2), IMM(451794));
	MOV(IND(3), LABEL(L_prim_procedure));
#define SOB_PRIM_PROCEDURE 1
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
	MOV(IND(4), IMM(T_CLOSURE));
	MOV(IND(5), IMM(544512));
	MOV(IND(6), LABEL(L_prim_null));
#define SOB_PRIM_NULL 4
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
	MOV(IND(7), IMM(T_CLOSURE));
	MOV(IND(8), IMM(183403));
	MOV(IND(9), LABEL(L_prim_pair));
#define SOB_PRIM_PAIR 7
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
	MOV(IND(10), IMM(T_CLOSURE));
	MOV(IND(11), IMM(101555));
	MOV(IND(12), LABEL(L_prim_number));
#define SOB_PRIM_NUMBER 10
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
	MOV(IND(13), IMM(T_CLOSURE));
	MOV(IND(14), IMM(957412));
	MOV(IND(15), LABEL(L_prim_integer));
#define SOB_PRIM_INTEGER 13
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
	MOV(IND(16), IMM(T_CLOSURE));
	MOV(IND(17), IMM(645713));
	MOV(IND(18), LABEL(L_prim_char));
#define SOB_PRIM_CHAR 16
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
	MOV(IND(19), IMM(T_CLOSURE));
	MOV(IND(20), IMM(110463));
	MOV(IND(21), LABEL(L_prim_boolean));
#define SOB_PRIM_BOOLEAN 19
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
	MOV(IND(22), IMM(T_CLOSURE));
	MOV(IND(23), IMM(358902));
	MOV(IND(24), LABEL(L_prim_symbol));
#define SOB_PRIM_SYMBOL 22
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
	MOV(IND(25), IMM(T_CLOSURE));
	MOV(IND(26), IMM(511179));
	MOV(IND(27), LABEL(L_prim_string));
#define SOB_PRIM_STRING 25
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
	MOV(IND(28), IMM(T_CLOSURE));
	MOV(IND(29), IMM(615181));
	MOV(IND(30), LABEL(L_prim_vector));
#define SOB_PRIM_VECTOR 28
/* primitive zero?  */
JUMP(L_zero_cont);
L_prim_zero:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(INDD(FPARG(2),1)); //param
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
	MOV(IND(31), IMM(T_CLOSURE));
	MOV(IND(32), IMM(602995));
	MOV(IND(33), LABEL(L_prim_zero));
#define SOB_PRIM_ZERO 31
/* primitive car  */
JUMP(L_car_cont);
L_prim_car:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_PAIR);
	POP(R1);
	CMP(R0, IMM(0));
	JUMP_EQ(L_car_ERROR);
	MOV(R0, INDD(R1,1));
	JUMP(L_car_Exit);
	L_car_ERROR:
	SHOW("Exception in car, This is not a pair: ", R0);
	L_car_Exit:
	POP(FP);
	RETURN;
L_car_cont:
	MOV(IND(34), IMM(T_CLOSURE));
	MOV(IND(35), IMM(921183));
	MOV(IND(36), LABEL(L_prim_car));
#define SOB_PRIM_CAR 34
/* primitive cdr  */
JUMP(L_cdr_cont);
L_prim_cdr:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(FPARG(2)); //param
	CALL(IS_SOB_PAIR);
	POP(R1);
	CMP(R0, IMM(0));
	JUMP_EQ(L_cdr_ERROR);
	MOV(R0, INDD(R1,2));
	JUMP(L_cdr_Exit);
	L_cdr_ERROR:
	SHOW("Exception in cdr, This is not a pair: ", R0);
	L_cdr_Exit:
	POP(FP);
	RETURN;
L_cdr_cont:
	MOV(IND(37), IMM(T_CLOSURE));
	MOV(IND(38), IMM(685967));
	MOV(IND(39), LABEL(L_prim_cdr));
#define SOB_PRIM_CDR 37
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
	MOV(IND(40), IMM(T_CLOSURE));
	MOV(IND(41), IMM(286949));
	MOV(IND(42), LABEL(L_prim_cons));
#define SOB_PRIM_CONS 40
/* primitive string-length  */
JUMP(L_strLength_cont);
L_prim_strLength:
	PUSH(FP);
	MOV(FP, SP);
	MOV(R0, FPARG(2)); //param
	CMP(IND(R0), T_STRING);
	JUMP_NE(L_strLength_ERROR);
	PUSH(INDD(R0,1)); //second memory cell is the size
	CALL(MAKE_SOB_INTEGER);
	DROP(1);
	JUMP(L_strLenth_Exit);
L_strLength_ERROR:
	SHOW("Exception in string-length, This is not a string: ", R0);
L_strLenth_Exit:
	POP(FP);
	RETURN;
L_strLength_cont:
	MOV(IND(43), IMM(T_CLOSURE));
	MOV(IND(44), IMM(743140));
	MOV(IND(45), LABEL(L_prim_strLength));
#define SOB_PRIM_STRING_LENGTH 43
/* primitive vector-length  */
JUMP(L_vecLength_cont);
L_prim_vecLength:
	PUSH(FP);
	MOV(FP, SP);
	MOV(R0, FPARG(2)); //param
	CMP(IND(R0), T_VECTOR);
	JUMP_NE(L_vecLength_ERROR);
	PUSH(INDD(R0,1)); //second memory cell is the size
	CALL(MAKE_SOB_INTEGER);
	DROP(1);
	JUMP(L_vecLenth_Exit);
L_vecLength_ERROR:
	SHOW("Exception in vector-length, This is not a vector: ", R0);
L_vecLenth_Exit:
	POP(FP);
	RETURN;
L_vecLength_cont:
	MOV(IND(46), IMM(T_CLOSURE));
	MOV(IND(47), IMM(529751));
	MOV(IND(48), LABEL(L_prim_vecLength));
#define SOB_PRIM_VECTOR_LENGTH 46
/* primitive set-car!  */
JUMP(L_set_car_cont);
L_prim_set_car:
	PUSH(FP);
	MOV(FP, SP);
	MOV(R0, FPARG(2)); // the pair
	CMP(IND(R0), T_PAIR);
	JUMP_NE(L_set_car_ERROR);
	MOV(R1, FPARG(3)); // new value
	MOV(INDD(R0,1), R1); // set!
	MOV(R0, SOB_VOID); //set-car! returns void
	JUMP(L_set_car_Exit);
L_set_car_ERROR:
	SHOW("Exception in set_car!, This is not a pair: ", R0);
L_set_car_Exit:
	POP(FP);
	RETURN;
L_set_car_cont:
	MOV(IND(49), IMM(T_CLOSURE));
	MOV(IND(50), IMM(569917));
	MOV(IND(51), LABEL(L_prim_set_car));
#define SOB_PRIM_SET_CAR 49
/* primitive set-cdr!  */
JUMP(L_set_cdr_cont);
L_prim_set_cdr:
	PUSH(FP);
	MOV(FP, SP);
	MOV(R0, FPARG(2)); // the pair
	CMP(IND(R0), T_PAIR);
	JUMP_NE(L_set_cdr_ERROR);
	MOV(R1, FPARG(3)); // new value
	MOV(INDD(R0,2), R1); // set!
	MOV(R0, SOB_VOID); //set-cdr! returns void
	JUMP(L_set_cdr_Exit);
L_set_cdr_ERROR:
	SHOW("Exception in set_cdr!, This is not a pair: ", R0);
L_set_cdr_Exit:
	POP(FP);
	RETURN;
L_set_cdr_cont:
	MOV(IND(52), IMM(T_CLOSURE));
	MOV(IND(53), IMM(510364));
	MOV(IND(54), LABEL(L_prim_set_cdr));
#define SOB_PRIM_SET_CDR 52
/* primitive vector-set!  */
JUMP(L_vecSet_cont);
L_prim_vecSet:
	PUSH(FP);
	MOV(FP, SP);
	MOV(R0, FPARG(2)); //vector
	CMP(IND(R0), T_VECTOR);
	JUMP_NE(L_vecSet_ERROR);
	MOV(R1, FPARG(3)); //position in vector
	MOV(R2, FPARG(4)); //new value	MOV(INDD(R0,R1), R2); // set!
	MOV(R0, SOB_VOID); //vector-set! returns void
	JUMP(L_vecSet_Exit);
L_vecSet_ERROR:
	SHOW("Exception in vector-set!, This is not a vector: ", R0);
L_vecSet_Exit:
	POP(FP);
	RETURN;
L_vecSet_cont:
	MOV(IND(55), IMM(T_CLOSURE));
	MOV(IND(56), IMM(183731));
	MOV(IND(57), LABEL(L_prim_vecSet));
#define SOB_PRIM_VECTOR_SET 55
/* primitive string-set!  */
JUMP(L_strSet_cont);
L_prim_strSet:
	PUSH(FP);
	MOV(FP, SP);
	MOV(R0, FPARG(2)); //string
	CMP(IND(R0), T_STRING);
	JUMP_NE(L_strSet_ERROR);
	MOV(R1, FPARG(3)); //position in string
	MOV(R2, FPARG(4)); //new value	MOV(INDD(R0,R1), R2); // set!
	MOV(R0, SOB_VOID); //string-set! returns void
	JUMP(L_strSet_Exit);
L_strSet_ERROR:
	SHOW("Exception in string-set!, This is not a string: ", R0);
L_strSet_Exit:
	POP(FP);
	RETURN;
L_strSet_cont:
	MOV(IND(58), IMM(T_CLOSURE));
	MOV(IND(59), IMM(805664));
	MOV(IND(60), LABEL(L_prim_strSet));
#define SOB_PRIM_STRING_SET 58
/* primitive string-ref  */
JUMP(L_strRef_cont);
L_prim_strRef:
	PUSH(FP);
	MOV(FP, SP);
	MOV(R0, FPARG(2)); //string
	CMP(IND(R0), T_STRING);
	JUMP_NE(L_strRef_ERROR);
	MOV(R1, INDD(FPARG(3),1));
	ADD(R1,IMM(2));  //positin in string
	PUSH(INDD(R0,R1)); //assuming R1 holds valid position
	CALL(MAKE_SOB_CHAR);
	DROP(1);
	JUMP(L_strRef_Exit);
L_strRef_ERROR:
	SHOW("Exception in string-ref, This is not a string: ", R0);
L_strRef_Exit:
	POP(FP);
	RETURN;
L_strRef_cont:
	MOV(IND(61), IMM(T_CLOSURE));
	MOV(IND(62), IMM(111363));
	MOV(IND(63), LABEL(L_prim_strRef));
#define SOB_PRIM_STRING_REF 61
/* primitive vector-ref  */
JUMP(L_vecRef_cont);
L_prim_vecRef:
	PUSH(FP);
	MOV(FP, SP);
	MOV(R0, FPARG(2)); //vector
	CMP(IND(R0), T_VECTOR);
	JUMP_NE(L_vecRef_ERROR);
	MOV(R1, INDD(FPARG(3),1));
	ADD(R1, IMM(2)); //positin in vector
	MOV(R0, INDD(R0,R1)); //assuming R1 holds valid position
	JUMP(L_vecRef_Exit);
L_vecRef_ERROR:
	SHOW("Exception in vector-ref, This is not a vector: ", R0);
L_vecRef_Exit:
	POP(FP);
	RETURN;
L_vecRef_cont:
	MOV(IND(64), IMM(T_CLOSURE));
	MOV(IND(65), IMM(248183));
	MOV(IND(66), LABEL(L_prim_vecRef));
#define SOB_PRIM_VECTOR_REF 64
/* primitive make-string  */
JUMP(L_makeStr_cont);
L_prim_makeStr:
	PUSH(FP);
	MOV(FP, SP);
	MOV(R0, FPARG(1)); //number of args on stack
	MOV(R1, INDD(FPARG(2),1)); //size of new string
	CMP(R0, IMM(1));
	JUMP_EQ(L_makeStr_oneArg); //only one arg, make-string with unspecified content
/* didn't jump, fill the string with the second arg */
	MOV(R2, INDD(FPARG(3),1)); //the char
	CMP(R1, IMM(0));
	JUMP_EQ(L_makeStr_Exit);
L_makeStr_twoArgs_BeginPush:
	PUSH(R2);
	DECR(R1);
	CMP(R1, IMM(0));
	JUMP_NE(L_makeStr_twoArgs_BeginPush);
	JUMP(L_makeStr_Exit);
L_makeStr_oneArg:
	CMP(R1, IMM(0));
	JUMP_EQ(L_makeStr_Exit);
L_makeStr_oneArg_BeginPush:
	PUSH(IMM(0));
	DECR(R1);
	CMP(R1, IMM(0));
	JUMP_NE(L_makeStr_oneArg_BeginPush);
L_makeStr_Exit:
/* done pushing the string content */
	MOV(R1, FPARG(2));
	PUSH(INDD(R1,1)); //size of string
	CALL(MAKE_SOB_STRING);
	DROP(INDD(FPARG(2),1) + 1); //drop unnecessary values from stack
	POP(FP);
	RETURN;
L_makeStr_cont:
	MOV(IND(67), IMM(T_CLOSURE));
	MOV(IND(68), IMM(911091));
	MOV(IND(69), LABEL(L_prim_makeStr));
#define SOB_PRIM_MAKE_STRING 67
/* primitive make-vector  */
JUMP(L_makeVec_cont);
L_prim_makeVec:
	PUSH(FP);
	MOV(FP, SP);
	MOV(R0, FPARG(1)); //number of args on stack
	DECR(R0); //don't count magic box
	MOV(R1, INDD(FPARG(2),1)); //size of new vector
	CMP(R0, IMM(1));
	JUMP_EQ(L_makeVec_oneArg); //only one arg, make-vector with unspecified content
/* didn't jump, fill the vector with the second arg */
	MOV(R2, FPARG(3)); //the value
	CMP(R1, IMM(0));
	JUMP_EQ(L_makeVec_Exit);
L_makeVec_twoArgs_BeginPush:
	PUSH(R2);
	DECR(R1);
	CMP(R1, IMM(0));
	JUMP_NE(L_makeVec_twoArgs_BeginPush);
	JUMP(L_makeVec_Exit);
L_makeVec_oneArg:
	CMP(R1, IMM(0));
	JUMP_EQ(L_makeVec_Exit);
L_makeVec_oneArg_BeginPush:
	PUSH(IMM(0));
	CALL(MAKE_SOB_INTEGER);
	DROP(1);
	PUSH(R0)
	DECR(R1);
	CMP(R1, IMM(0));
	JUMP_NE(L_makeVec_oneArg_BeginPush);
L_makeVec_Exit:
/* done pushing the vector content */
	MOV(R1, FPARG(2));
	PUSH(INDD(R1,1)); //size of vector
	CALL(MAKE_SOB_VECTOR);
	DROP(INDD(FPARG(2),1) + 1); //drop unnecessary values from stack
	POP(FP);
	RETURN;
L_makeVec_cont:
	MOV(IND(70), IMM(T_CLOSURE));
	MOV(IND(71), IMM(400183));
	MOV(IND(72), LABEL(L_prim_makeVec));
#define SOB_PRIM_MAKE_VECTOR 70
/* primitive remainder  */
JUMP(L_remainder_cont);
L_prim_remainder:
	PUSH(FP);
	MOV(FP, SP);
	MOV(R0, INDD(FPARG(2),1)); //first value as long value
	REM(R0, INDD(FPARG(3),1)); //use remainder proc with the second value as long value
	PUSH(R0);
	CALL(MAKE_SOB_INTEGER);
	DROP(1);
	POP(FP);
	RETURN;
L_remainder_cont:
	MOV(IND(73), IMM(T_CLOSURE));
	MOV(IND(74), IMM(722858));
	MOV(IND(75), LABEL(L_prim_remainder));
#define SOB_PRIM_REMAINDER 73
/* primitive apply */
JUMP(L_apply_cont);
L_prim_apply:
	PUSH(FP);
	MOV(FP, SP);
	/* determine list size */
	MOV(R1,IMM(0)); //R1 will hold list size
	MOV(R0, FPARG(3)); //list
	L_apply_size_Begin:
		CMP(IND(R0), T_PAIR);
		JUMP_NE(L_apply_size_End);
		INCR(R1);
		MOV(R0, INDD(R0,2));
		JUMP(L_apply_size_Begin);
	L_apply_size_End:
	/* done calculating list size, R1 holds it */
	MOV(R2, R1); //save the size for later use
	/* start pushing the list args to stack (last first) */
	L_apply_begin_push:
		CMP(R2, IMM(0));
		JUMP_EQ(L_apply_end_push);
		//loop that finds the current arg to push
		MOV(R3, R2);
		DECR(R3); //R3 holds number of inner iterations
		MOV(R0, FPARG(3)); //first pair in list
		L_apply_begin_search:
			CMP(R3, IMM(0));
			JUMP_EQ(L_apply_end_search);
			MOV(R0, INDD(R0,2)); //next pair
			DECR(R3);
			JUMP(L_apply_begin_search);
		L_apply_end_search:
		PUSH(INDD(R0,1));
		DECR(R2);
		JUMP(L_apply_begin_push);
	L_apply_end_push:
	PUSH(R1); //pushing args size to stack
	// done pushing args, now handling proc
	MOV(R0, FPARG(2)); //proc
	CMP(IND(R0) , T_CLOSURE);
	JUMP_NE(L_apply_not_proc);
	PUSH(INDD(R0,1));  // env
	PUSH(FPARG(-1)); // return address from current frame
	MOV(R2,FPARG(-2)); // save FP
	//start overriding old frame
	MOV(R3, R1);
	ADD(R3, IMM(3)); //R3 holds loop size
	MOV(R4, FPARG(1)); //number of old arguments
	ADD(R4,IMM(1)); //R4 points to first old param from FPARG point of view
	MOV(R5, STARG(1)); //number of new arguments
	ADD(R5, IMM(1)); //R5 points to first new param from STARG point of view
	L_apply_override:
		MOV(R6, STARG(R5));
		MOV(FPARG(R4),R6); //overriding
		SUB(R3,1);
		SUB(R4,1); //next old param
		SUB(R5,1); //next new param
		CMP(R3, IMM(0));
		JUMP_NE(L_apply_override);
	//end overriding
	//complete the override by dropping unnecessary items from stack
	DROP(IMM(7)); //apply had 7 values on stack before
	MOV(FP,R2); //Restore old FP in preparation of JUMP
	JUMPA(INDD(R0,2));  //code
	L_apply_not_proc:
	SHOW("Exception: attempt to apply non-procedure ", R0);
	POP(FP);
	RETURN;
L_apply_cont:
	MOV(IND(76), IMM(T_CLOSURE));
	MOV(IND(77), IMM(864017));
	MOV(IND(78), LABEL(L_prim_apply));
#define SOB_PRIM_APPLY 76
/* primitive char->integer  */
JUMP(L_char_int_cont);
L_prim_char_int:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(INDD(FPARG(2),1)); //the char
	CALL(MAKE_SOB_INTEGER);
	DROP(1);
	POP(FP);
	RETURN;
L_char_int_cont:
	MOV(IND(79), IMM(T_CLOSURE));
	MOV(IND(80), IMM(508854));
	MOV(IND(81), LABEL(L_prim_char_int));
#define SOB_PRIM_CHAR_TO_INTEGER 79
/* primitive integer->char  */
JUMP(L_int_char_cont);
L_prim_int_char:
	PUSH(FP);
	MOV(FP, SP);
	PUSH(INDD(FPARG(2),1)); //the integer
	CALL(MAKE_SOB_CHAR);
	DROP(1);
	POP(FP);
	RETURN;
L_int_char_cont:
	MOV(IND(82), IMM(T_CLOSURE));
	MOV(IND(83), IMM(414227));
	MOV(IND(84), LABEL(L_prim_int_char));
#define SOB_PRIM_INTEGER_TO_CHAR 82
/* primitive eq?  */
JUMP(L_eq_cont);
L_prim_eq:
	PUSH(FP);
	MOV(FP, SP);
	MOV(R0, FPARG(2)); //first expr
	MOV(R1, FPARG(3)); //second expr
	CMP(IND(R0),IND(R1)); //check type
	JUMP_NE(L_eq_False);
	CMP(IND(R0), T_VOID);
	JUMP_EQ(L_eq_check_data);
	CMP(IND(R0), T_NIL);
	JUMP_EQ(L_eq_check_data);
	CMP(IND(R0), T_BOOL);
	JUMP_EQ(L_eq_check_data);
	CMP(IND(R0), T_CHAR);
	JUMP_EQ(L_eq_check_data);
	CMP(IND(R0), T_INTEGER);
	JUMP_EQ(L_eq_check_data);
	CMP(IND(R0), T_CLOSURE);
	JUMP_EQ(L_eq_check_address);
	CMP(IND(R0), T_STRING);
	JUMP_EQ(L_eq_check_address);
	CMP(IND(R0), T_PAIR);
	JUMP_EQ(L_eq_check_address);
	CMP(IND(R0), T_VECTOR);
	JUMP_EQ(L_eq_check_address);
	CMP(IND(R0), T_SYMBOL);
	JUMP_EQ(L_eq_check_symbol);
L_eq_check_address:
	CMP(R0,R1); //check by addresses
	JUMP_NE(L_eq_False);
	MOV(R0, SOB_TRUE);
	JUMP(L_eq_Exit);
L_eq_check_data:
	CMP(INDD(R0,1), INDD(R1,1)); //check by data
	JUMP_NE(L_eq_False);
	MOV(R0, SOB_TRUE);
	JUMP(L_eq_Exit);
L_eq_check_symbol:
L_eq_False:
	MOV(R0, SOB_FALSE);
L_eq_Exit:
	POP(FP);
	RETURN;
L_eq_cont:
	MOV(IND(85), IMM(T_CLOSURE));
	MOV(IND(86), IMM(572874));
	MOV(IND(87), LABEL(L_prim_eq));
#define SOB_PRIM_EQ 85

/* begin of constant definition */ 


long mem_init[] = { 937610 , 722689 , 741553 , 0 , 741553 , 1 , 945311 , 2 , 945311 , 1 , 945311 , 4 , 945311 , 3 , 945311 , 5  };//constsnts array
memcpy((void*) &IND(100), (void*) &mem_init, 16*WORD_SIZE);


/* start of generated code */


MOV(R0,108);
CMP(IND(R0), T_VOID);
JUMP_NE(L_print_cont16);
NOP;
JUMP(L_print_exit16);
L_print_cont16:
PUSH(R0);
CALL(WRITE_SOB);
CALL(NEWLINE);
DROP(1);
L_print_exit16:
MOV(R0,106);
CMP(IND(R0), T_VOID);
JUMP_NE(L_print_cont15);
NOP;
JUMP(L_print_exit15);
L_print_cont15:
PUSH(R0);
CALL(WRITE_SOB);
CALL(NEWLINE);
DROP(1);
L_print_exit15:
//begin expr: (if3 (const #f) (const #f) (const #<void>))
MOV(R0,102);

CMP(R0, SOB_FALSE);
JUMP_EQ(Lif3else4);
MOV(R0,102);

JUMP(Lif3exit4);
Lif3else4:
MOV(R0,100);

Lif3exit4:
//end expr: (if3 (const #f) (const #f) (const #<void>))
CMP(IND(R0), T_VOID);
JUMP_NE(L_print_cont14);
NOP;
JUMP(L_print_exit14);
L_print_cont14:
PUSH(R0);
CALL(WRITE_SOB);
CALL(NEWLINE);
DROP(1);
L_print_exit14:
MOV(R0,112);
CMP(IND(R0), T_VOID);
JUMP_NE(L_print_cont13);
NOP;
JUMP(L_print_exit13);
L_print_cont13:
PUSH(R0);
CALL(WRITE_SOB);
CALL(NEWLINE);
DROP(1);
L_print_exit13:
MOV(R0,110);
CMP(IND(R0), T_VOID);
JUMP_NE(L_print_cont12);
NOP;
JUMP(L_print_exit12);
L_print_cont12:
PUSH(R0);
CALL(WRITE_SOB);
CALL(NEWLINE);
DROP(1);
L_print_exit12:
//begin expr: (applic (fvar set-car!) ((applic (fvar cons) ((const 1) (const 2))) (const 3)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
MOV(R0,112);
PUSH(R0);
//begin expr: (applic (fvar cons) ((const 1) (const 2)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
MOV(R0,106);
PUSH(R0);
MOV(R0,108);
PUSH(R0);
PUSH(IMM(3)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
MOV(R0, IMM(SOB_PRIM_CONS));
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
//end expr: (applic (fvar cons) ((const 1) (const 2)))
PUSH(R0);
PUSH(IMM(3)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
MOV(R0, IMM(SOB_PRIM_SET_CAR));
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
//end expr: (applic (fvar set-car!) ((applic (fvar cons) ((const 1) (const 2))) (const 3)))
CMP(IND(R0), T_VOID);
JUMP_NE(L_print_cont11);
NOP;
JUMP(L_print_exit11);
L_print_cont11:
PUSH(R0);
CALL(WRITE_SOB);
CALL(NEWLINE);
DROP(1);
L_print_exit11:
MOV(R0,114);
CMP(IND(R0), T_VOID);
JUMP_NE(L_print_cont10);
NOP;
JUMP(L_print_exit10);
L_print_cont10:
PUSH(R0);
CALL(WRITE_SOB);
CALL(NEWLINE);
DROP(1);
L_print_exit10:
STOP_MACHINE;
return 0;
}
