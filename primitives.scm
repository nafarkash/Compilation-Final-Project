;;;;;;;;;;;;;;;; procedure implementation ;;;;;;;;;;;;;;;;;;

(define prim_procedure
	(lambda ()
		(string-append
			"/* primitive procedure?  */" nl
			"JUMP(L_procedure_cont);" nl
			"L_prim_procedure:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(FPARG(2)); //param" nl
			tab "CALL(IS_SOB_CLOSURE);" nl
			tab "DROP(1);" nl
			tab "CMP(R0, IMM(1));" nl
			tab "JUMP_EQ(L_procedure_True);" nl
			tab "MOV(R0, SOB_FALSE);" nl
			tab "JUMP(L_procedure_Exit);" nl
			tab "L_procedure_True:" nl
			tab "MOV(R0, SOB_TRUE);" nl
			tab "L_procedure_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_procedure_cont:" nl
			tab "MOV(IND(1), IMM(T_CLOSURE));" nl
			tab "MOV(IND(2), IMM(451794));" nl
			tab "MOV(IND(3), LABEL(L_prim_procedure));" nl
			"#define SOB_PRIM_PROCEDURE 1" nl
		)
	)
)

(define prim_null
	(lambda ()
		(string-append
			"/* primitive null?  */" nl
			"JUMP(L_null_cont);" nl
			"L_prim_null:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(FPARG(2)); //param" nl
			tab "CALL(IS_SOB_NIL);" nl
			tab "DROP(1);" nl
			tab "CMP(R0, IMM(1));" nl
			tab "JUMP_EQ(L_null_True);" nl
			tab "MOV(R0, SOB_FALSE);" nl
			tab "JUMP(L_null_Exit);" nl
			tab "L_null_True:" nl
			tab "MOV(R0, SOB_TRUE);" nl
			tab "L_null_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_null_cont:" nl
			tab "MOV(IND(4), IMM(T_CLOSURE));" nl
			tab "MOV(IND(5), IMM(544512));" nl
			tab "MOV(IND(6), LABEL(L_prim_null));" nl
			"#define SOB_PRIM_NULL 4" nl
		)
	)
)

(define prim_pair
	(lambda ()
		(string-append
			"/* primitive pair?  */" nl
			"JUMP(L_pair_cont);" nl
			"L_prim_pair:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(FPARG(2)); //param" nl
			tab "CALL(IS_SOB_PAIR);" nl
			tab "DROP(1);" nl
			tab "CMP(R0, IMM(1));" nl
			tab "JUMP_EQ(L_pair_True);" nl
			tab "MOV(R0, SOB_FALSE);" nl
			tab "JUMP(L_pair_Exit);" nl
			tab "L_pair_True:" nl
			tab "MOV(R0, SOB_TRUE);" nl
			tab "L_pair_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_pair_cont:" nl
			tab "MOV(IND(7), IMM(T_CLOSURE));" nl
			tab "MOV(IND(8), IMM(183403));" nl
			tab "MOV(IND(9), LABEL(L_prim_pair));" nl
			"#define SOB_PRIM_PAIR 7" nl
		)
	)
)

(define prim_number
	(lambda ()
		(string-append
			"/* primitive number?  */" nl
			"JUMP(L_number_cont);" nl
			"L_prim_number:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(FPARG(2)); //param" nl
			tab "CALL(IS_SOB_INTEGER);" nl
			tab "DROP(1);" nl
			tab "CMP(R0, IMM(1));" nl
			tab "JUMP_EQ(L_number_True);" nl
			tab "MOV(R0, SOB_FALSE);" nl
			tab "JUMP(L_number_Exit);" nl
			tab "L_number_True:" nl
			tab "MOV(R0, SOB_TRUE);" nl
			tab "L_number_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_number_cont:" nl
			tab "MOV(IND(10), IMM(T_CLOSURE));" nl
			tab "MOV(IND(11), IMM(101555));" nl
			tab "MOV(IND(12), LABEL(L_prim_number));" nl
			"#define SOB_PRIM_NUMBER 10" nl
		)
	)
)

(define prim_integer
	(lambda ()
		(string-append
			"/* primitive integer?  */" nl
			"JUMP(L_integer_cont);" nl
			"L_prim_integer:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(FPARG(2)); //param" nl
			tab "CALL(IS_SOB_INTEGER);" nl
			tab "DROP(1);" nl
			tab "CMP(R0, IMM(1));" nl
			tab "JUMP_EQ(L_integer_True);" nl
			tab "MOV(R0, SOB_FALSE);" nl
			tab "JUMP(L_integer_Exit);" nl
			tab "L_integer_True:" nl
			tab "MOV(R0, SOB_TRUE);" nl
			tab "L_integer_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_integer_cont:" nl
			tab "MOV(IND(13), IMM(T_CLOSURE));" nl
			tab "MOV(IND(14), IMM(957412));" nl
			tab "MOV(IND(15), LABEL(L_prim_integer));" nl
			"#define SOB_PRIM_INTEGER 13" nl
		)
	)
)

(define prim_char
	(lambda ()
		(string-append
			"/* primitive char?  */" nl
			"JUMP(L_char_cont);" nl
			"L_prim_char:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(FPARG(2)); //param" nl
			tab "CALL(IS_SOB_CHAR);" nl
			tab "DROP(1);" nl
			tab "CMP(R0, IMM(1));" nl
			tab "JUMP_EQ(L_char_True);" nl
			tab "MOV(R0, SOB_FALSE);" nl
			tab "JUMP(L_char_Exit);" nl
			tab "L_char_True:" nl
			tab "MOV(R0, SOB_TRUE);" nl
			tab "L_char_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_char_cont:" nl
			tab "MOV(IND(16), IMM(T_CLOSURE));" nl
			tab "MOV(IND(17), IMM(645713));" nl
			tab "MOV(IND(18), LABEL(L_prim_char));" nl
			"#define SOB_PRIM_CHAR 16" nl
		)
	)
)

(define prim_boolean
	(lambda ()
		(string-append
			"/* primitive boolean?  */" nl
			"JUMP(L_boolean_cont);" nl
			"L_prim_boolean:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(FPARG(2)); //param" nl
			tab "CALL(IS_SOB_BOOL);" nl
			tab "DROP(1);" nl
			tab "CMP(R0, IMM(1));" nl
			tab "JUMP_EQ(L_boolean_True);" nl
			tab "MOV(R0, SOB_FALSE);" nl
			tab "JUMP(L_boolean_Exit);" nl
			tab "L_boolean_True:" nl
			tab "MOV(R0, SOB_TRUE);" nl
			tab "L_boolean_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_boolean_cont:" nl
			tab "MOV(IND(19), IMM(T_CLOSURE));" nl
			tab "MOV(IND(20), IMM(110463));" nl
			tab "MOV(IND(21), LABEL(L_prim_boolean));" nl
			"#define SOB_PRIM_BOOLEAN 19" nl
		)
	)
)

(define prim_symbol
	(lambda ()
		(string-append
			"/* primitive symbol?  */" nl
			"JUMP(L_symbol_cont);" nl
			"L_prim_symbol:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(FPARG(2)); //param" nl
			tab "CALL(IS_SOB_SYMBOL);" nl
			tab "DROP(1);" nl
			tab "CMP(R0, IMM(1));" nl
			tab "JUMP_EQ(L_symbol_True);" nl
			tab "MOV(R0, SOB_FALSE);" nl
			tab "JUMP(L_symbol_Exit);" nl
			tab "L_symbol_True:" nl
			tab "MOV(R0, SOB_TRUE);" nl
			tab "L_symbol_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_symbol_cont:" nl
			tab "MOV(IND(22), IMM(T_CLOSURE));" nl
			tab "MOV(IND(23), IMM(358902));" nl
			tab "MOV(IND(24), LABEL(L_prim_symbol));" nl
			"#define SOB_PRIM_SYMBOL 22" nl
		)
	)
)

(define prim_string
	(lambda ()
		(string-append
			"/* primitive string?  */" nl
			"JUMP(L_string_cont);" nl
			"L_prim_string:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(FPARG(2)); //param" nl
			tab "CALL(IS_SOB_STRING);" nl
			tab "DROP(1);" nl
			tab "CMP(R0, IMM(1));" nl
			tab "JUMP_EQ(L_string_True);" nl
			tab "MOV(R0, SOB_FALSE);" nl
			tab "JUMP(L_string_Exit);" nl
			tab "L_string_True:" nl
			tab "MOV(R0, SOB_TRUE);" nl
			tab "L_string_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_string_cont:" nl
			tab "MOV(IND(25), IMM(T_CLOSURE));" nl
			tab "MOV(IND(26), IMM(511179));" nl
			tab "MOV(IND(27), LABEL(L_prim_string));" nl
			"#define SOB_PRIM_STRING 25" nl
		)
	)
)

(define prim_vector
	(lambda ()
		(string-append
			"/* primitive vector?  */" nl
			"JUMP(L_vector_cont);" nl
			"L_prim_vector:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(FPARG(2)); //param" nl
			tab "CALL(IS_SOB_VECTOR);" nl
			tab "DROP(1);" nl
			tab "CMP(R0, IMM(1));" nl
			tab "JUMP_EQ(L_vector_True);" nl
			tab "MOV(R0, SOB_FALSE);" nl
			tab "JUMP(L_vector_Exit);" nl
			tab "L_vector_True:" nl
			tab "MOV(R0, SOB_TRUE);" nl
			tab "L_vector_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_vector_cont:" nl
			tab "MOV(IND(28), IMM(T_CLOSURE));" nl
			tab "MOV(IND(29), IMM(615181));" nl
			tab "MOV(IND(30), LABEL(L_prim_vector));" nl
			"#define SOB_PRIM_VECTOR 28" nl
		)
	)
)

(define prim_zero
	(lambda ()
		(string-append
			"/* primitive zero?  */" nl
			"JUMP(L_zero_cont);" nl
			"L_prim_zero:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(INDD(FPARG(2),1)); //param" nl
			tab "CALL(IS_ZERO);" nl
			tab "DROP(1);" nl
			tab "CMP(R0, IMM(1));" nl
			tab "JUMP_EQ(L_zero_True);" nl
			tab "MOV(R0, SOB_FALSE);" nl
			tab "JUMP(L_zero_Exit);" nl
			tab "L_zero_True:" nl
			tab "MOV(R0, SOB_TRUE);" nl
			tab "L_zero_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_zero_cont:" nl
			tab "MOV(IND(31), IMM(T_CLOSURE));" nl
			tab "MOV(IND(32), IMM(602995));" nl
			tab "MOV(IND(33), LABEL(L_prim_zero));" nl
			"#define SOB_PRIM_ZERO 31" nl
		)
	)
)

(define prim_car
	(lambda ()
		(string-append
			"/* primitive car  */" nl
			"JUMP(L_car_cont);" nl
			"L_prim_car:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(FPARG(2)); //param" nl
			tab "CALL(IS_SOB_PAIR);" nl
			tab "POP(R1);" nl
			tab "CMP(R0, IMM(0));" nl
			tab "JUMP_EQ(L_car_ERROR);" nl
			tab "MOV(R0, INDD(R1,1));" nl
			tab "JUMP(L_car_Exit);" nl
			tab "L_car_ERROR:" nl
			tab "SHOW(\"Exception in car, This is not a pair: \", R0);" nl
			tab "L_car_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_car_cont:" nl
			tab "MOV(IND(34), IMM(T_CLOSURE));" nl
			tab "MOV(IND(35), IMM(921183));" nl
			tab "MOV(IND(36), LABEL(L_prim_car));" nl
			"#define SOB_PRIM_CAR 34" nl
		)
	)
)

(define prim_cdr
	(lambda ()
		(string-append
			"/* primitive cdr  */" nl
			"JUMP(L_cdr_cont);" nl
			"L_prim_cdr:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(FPARG(2)); //param" nl
			tab "CALL(IS_SOB_PAIR);" nl
			tab "POP(R1);" nl
			tab "CMP(R0, IMM(0));" nl
			tab "JUMP_EQ(L_cdr_ERROR);" nl
			tab "MOV(R0, INDD(R1,2));" nl
			tab "JUMP(L_cdr_Exit);" nl
			tab "L_cdr_ERROR:" nl
			tab "SHOW(\"Exception in cdr, This is not a pair: \", R0);" nl
			tab "L_cdr_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_cdr_cont:" nl
			tab "MOV(IND(37), IMM(T_CLOSURE));" nl
			tab "MOV(IND(38), IMM(685967));" nl
			tab "MOV(IND(39), LABEL(L_prim_cdr));" nl
			"#define SOB_PRIM_CDR 37" nl
		)
	)
)

(define prim_cons
	(lambda ()
		(string-append
			"/* primitive cons  */" nl
			"JUMP(L_cons_cont);" nl
			"L_prim_cons:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(FPARG(3)); // The cdr"  nl
			tab "PUSH(FPARG(2)); // The car" nl
			tab "CALL(MAKE_SOB_PAIR);" nl
			tab "DROP(2);" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_cons_cont:" nl
			tab "MOV(IND(40), IMM(T_CLOSURE));" nl
			tab "MOV(IND(41), IMM(286949));" nl
			tab "MOV(IND(42), LABEL(L_prim_cons));" nl
			"#define SOB_PRIM_CONS 40" nl
		)
	)
)

(define prim_string-length
	(lambda ()
		(string-append
			"/* primitive string-length  */" nl
			"JUMP(L_strLength_cont);" nl
			"L_prim_strLength:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "MOV(R0, FPARG(2)); //param" nl
			tab "CMP(IND(R0), T_STRING);" nl
			tab "JUMP_NE(L_strLength_ERROR);" nl
			tab "PUSH(INDD(R0,1)); //second memory cell is the size" nl
			tab "CALL(MAKE_SOB_INTEGER);" nl
			tab "DROP(1);" nl
			tab "JUMP(L_strLenth_Exit);" nl
			"L_strLength_ERROR:" nl
			tab "SHOW(\"Exception in string-length, This is not a string: \", R0);" nl 
			"L_strLenth_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_strLength_cont:" nl
			tab "MOV(IND(43), IMM(T_CLOSURE));" nl
			tab "MOV(IND(44), IMM(743140));" nl
			tab "MOV(IND(45), LABEL(L_prim_strLength));" nl
			"#define SOB_PRIM_STRING_LENGTH 43" nl
		)
	)
)

(define prim_vector-length
	(lambda ()
		(string-append
			"/* primitive vector-length  */" nl
			"JUMP(L_vecLength_cont);" nl
			"L_prim_vecLength:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "MOV(R0, FPARG(2)); //param" nl
			tab "CMP(IND(R0), T_VECTOR);" nl
			tab "JUMP_NE(L_vecLength_ERROR);" nl
			tab "PUSH(INDD(R0,1)); //second memory cell is the size" nl
			tab "CALL(MAKE_SOB_INTEGER);" nl
			tab "DROP(1);" nl
			tab "JUMP(L_vecLenth_Exit);" nl
			"L_vecLength_ERROR:" nl
			tab "SHOW(\"Exception in vector-length, This is not a vector: \", R0);" nl 
			"L_vecLenth_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_vecLength_cont:" nl
			tab "MOV(IND(46), IMM(T_CLOSURE));" nl
			tab "MOV(IND(47), IMM(529751));" nl
			tab "MOV(IND(48), LABEL(L_prim_vecLength));" nl
			"#define SOB_PRIM_VECTOR_LENGTH 46" nl
		)
	)
)

(define prim_set-car!
	(lambda ()
		(string-append
			"/* primitive set-car!  */" nl
			"JUMP(L_set_car_cont);" nl
			"L_prim_set_car:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "MOV(R0, FPARG(2)); // the pair" nl
			tab "CMP(IND(R0), T_PAIR);" nl
			tab "JUMP_NE(L_set_car_ERROR);" nl
			tab "MOV(R1, FPARG(3)); // new value" nl
			tab "MOV(INDD(R0,1), R1); // set!" nl
			tab "MOV(R0, SOB_VOID); //set-car! returns void" nl
			tab "JUMP(L_set_car_Exit);" nl
			"L_set_car_ERROR:" nl
			tab "SHOW(\"Exception in set_car!, This is not a pair: \", R0);" nl 
			"L_set_car_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_set_car_cont:" nl
			tab "MOV(IND(49), IMM(T_CLOSURE));" nl
			tab "MOV(IND(50), IMM(569917));" nl
			tab "MOV(IND(51), LABEL(L_prim_set_car));" nl
			"#define SOB_PRIM_SET_CAR 49" nl
		)
	)
)

(define prim_set-cdr!
	(lambda ()
		(string-append
			"/* primitive set-cdr!  */" nl
			"JUMP(L_set_cdr_cont);" nl
			"L_prim_set_cdr:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "MOV(R0, FPARG(2)); // the pair" nl
			tab "CMP(IND(R0), T_PAIR);" nl
			tab "JUMP_NE(L_set_cdr_ERROR);" nl
			tab "MOV(R1, FPARG(3)); // new value" nl
			tab "MOV(INDD(R0,2), R1); // set!" nl
			tab "MOV(R0, SOB_VOID); //set-cdr! returns void" nl
			tab "JUMP(L_set_cdr_Exit);" nl
			"L_set_cdr_ERROR:" nl
			tab "SHOW(\"Exception in set_cdr!, This is not a pair: \", R0);" nl 
			"L_set_cdr_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_set_cdr_cont:" nl
			tab "MOV(IND(52), IMM(T_CLOSURE));" nl
			tab "MOV(IND(53), IMM(510364));" nl
			tab "MOV(IND(54), LABEL(L_prim_set_cdr));" nl
			"#define SOB_PRIM_SET_CDR 52" nl
		)
	)
)

;;; assuming k is a valid position
(define prim_vector-set!
	(lambda ()
		(string-append
			"/* primitive vector-set!  */" nl
			"JUMP(L_vecSet_cont);" nl
			"L_prim_vecSet:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "MOV(R0, FPARG(2)); //vector" nl
			tab "CMP(IND(R0), T_VECTOR);" nl
			tab "JUMP_NE(L_vecSet_ERROR);" nl
			tab "MOV(R1, INDD(FPARG(3),1));" nl
			tab "ADD(R1,IMM(2));  //positin in vector" nl
			tab "MOV(R2, FPARG(4)); //new value" nl
			tab "MOV(INDD(R0,R1), R2); // set!" nl
			tab "MOV(R0, SOB_VOID); //vector-set! returns void" nl
			tab "JUMP(L_vecSet_Exit);" nl
			"L_vecSet_ERROR:" nl
			tab "SHOW(\"Exception in vector-set!, This is not a vector: \", R0);" nl 
			"L_vecSet_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_vecSet_cont:" nl
			tab "MOV(IND(55), IMM(T_CLOSURE));" nl
			tab "MOV(IND(56), IMM(183731));" nl
			tab "MOV(IND(57), LABEL(L_prim_vecSet));" nl
			"#define SOB_PRIM_VECTOR_SET 55" nl
		)
	)
)

;;; assuming k is a valid position, new arg is char 
(define prim_string-set!
	(lambda ()
		(string-append
			"/* primitive string-set!  */" nl
			"JUMP(L_strSet_cont);" nl
			"L_prim_strSet:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "MOV(R0, FPARG(2)); //string" nl
			tab "CMP(IND(R0), T_STRING);" nl
			tab "JUMP_NE(L_strSet_ERROR);" nl
			tab "MOV(R1, INDD(FPARG(3),1));" nl
			tab "ADD(R1,IMM(2));  //positin in string" nl
			tab "MOV(R2, INDD(FPARG(4),1)); //new value" nl
			tab "MOV(INDD(R0,R1), R2); // set!" nl
			tab "MOV(R0, SOB_VOID); //string-set! returns void" nl
			tab "JUMP(L_strSet_Exit);" nl
			"L_strSet_ERROR:" nl
			tab "SHOW(\"Exception in string-set!, This is not a string: \", R0);" nl 
			"L_strSet_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_strSet_cont:" nl
			tab "MOV(IND(58), IMM(T_CLOSURE));" nl
			tab "MOV(IND(59), IMM(805664));" nl
			tab "MOV(IND(60), LABEL(L_prim_strSet));" nl
			"#define SOB_PRIM_STRING_SET 58" nl
		)
	)
)

(define prim_string-ref
	(lambda ()
		(string-append
			"/* primitive string-ref  */" nl
			"JUMP(L_strRef_cont);" nl
			"L_prim_strRef:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "MOV(R0, FPARG(2)); //string" nl
			tab "CMP(IND(R0), T_STRING);" nl
			tab "JUMP_NE(L_strRef_ERROR);" nl
			tab "MOV(R1, INDD(FPARG(3),1));" nl
			tab "ADD(R1,IMM(2));  //positin in string" nl
			tab "PUSH(INDD(R0,R1)); //assuming R1 holds valid position" nl
			tab "CALL(MAKE_SOB_CHAR);" nl
			tab "DROP(1);" nl
			tab "JUMP(L_strRef_Exit);" nl
			"L_strRef_ERROR:" nl
			tab "SHOW(\"Exception in string-ref, This is not a string: \", R0);" nl 
			"L_strRef_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_strRef_cont:" nl
			tab "MOV(IND(61), IMM(T_CLOSURE));" nl
			tab "MOV(IND(62), IMM(111363));" nl
			tab "MOV(IND(63), LABEL(L_prim_strRef));" nl
			"#define SOB_PRIM_STRING_REF 61" nl
		)
	)
)

(define prim_vector-ref
	(lambda ()
		(string-append
			"/* primitive vector-ref  */" nl
			"JUMP(L_vecRef_cont);" nl
			"L_prim_vecRef:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "MOV(R0, FPARG(2)); //vector" nl
			tab "CMP(IND(R0), T_VECTOR);" nl
			tab "JUMP_NE(L_vecRef_ERROR);" nl
			tab "MOV(R1, INDD(FPARG(3),1));" nl
			tab "ADD(R1, IMM(2)); //positin in vector" nl
			tab "MOV(R0, INDD(R0,R1)); //assuming R1 holds valid position" nl
			tab "JUMP(L_vecRef_Exit);" nl
			"L_vecRef_ERROR:" nl
			tab "SHOW(\"Exception in vector-ref, This is not a vector: \", R0);" nl 
			"L_vecRef_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_vecRef_cont:" nl
			tab "MOV(IND(64), IMM(T_CLOSURE));" nl
			tab "MOV(IND(65), IMM(248183));" nl
			tab "MOV(IND(66), LABEL(L_prim_vecRef));" nl
			"#define SOB_PRIM_VECTOR_REF 64" nl
		)
	)
)

;;; TODO: change the SOB_VOID to undefined char
(define prim_make-string
	(lambda ()
		(string-append
			"/* primitive make-string  */" nl
			"JUMP(L_makeStr_cont);" nl
			"L_prim_makeStr:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "MOV(R0, FPARG(1)); //number of args on stack" nl
			tab "MOV(R1, INDD(FPARG(2),1)); //size of new string" nl
			tab "CMP(R0, IMM(1));" nl
			tab "JUMP_EQ(L_makeStr_oneArg); //only one arg, make-string with unspecified content" nl
			"/* didn't jump, fill the string with the second arg */" nl
			tab "MOV(R2, INDD(FPARG(3),1)); //the char" nl
			tab "CMP(R1, IMM(0));" nl
			tab "JUMP_EQ(L_makeStr_Exit);" nl
			"L_makeStr_twoArgs_BeginPush:" nl
			tab "PUSH(R2);" nl
			tab "DECR(R1);" nl
			tab "CMP(R1, IMM(0));" nl
			tab "JUMP_NE(L_makeStr_twoArgs_BeginPush);" nl
			tab "JUMP(L_makeStr_Exit);" nl
			"L_makeStr_oneArg:" nl
			tab "CMP(R1, IMM(0));" nl
			tab "JUMP_EQ(L_makeStr_Exit);" nl
			"L_makeStr_oneArg_BeginPush:" nl
			tab "PUSH(IMM(0));" nl
			tab "DECR(R1);" nl
			tab "CMP(R1, IMM(0));" nl
			tab "JUMP_NE(L_makeStr_oneArg_BeginPush);" nl
			"L_makeStr_Exit:" nl
			"/* done pushing the string content */" nl
			tab "MOV(R1, FPARG(2));" nl
			tab "PUSH(INDD(R1,1)); //size of string" nl
			tab "CALL(MAKE_SOB_STRING);" nl
			tab "DROP(INDD(FPARG(2),1) + 1); //drop unnecessary values from stack" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_makeStr_cont:" nl
			tab "MOV(IND(67), IMM(T_CLOSURE));" nl
			tab "MOV(IND(68), IMM(911091));" nl
			tab "MOV(IND(69), LABEL(L_prim_makeStr));" nl
			"#define SOB_PRIM_MAKE_STRING 67" nl
		)
	)
)

;;; TODO: change the SOB_VOID to (SOB_INTEGER(0))
(define prim_make-vector
	(lambda ()
		(string-append
			"/* primitive make-vector  */" nl
			"JUMP(L_makeVec_cont);" nl
			"L_prim_makeVec:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "MOV(R0, FPARG(1)); //number of args on stack" nl
			tab "DECR(R0); //don't count magic box" nl
			tab "MOV(R1, INDD(FPARG(2),1)); //size of new vector" nl
			tab "CMP(R0, IMM(1));" nl
			tab "JUMP_EQ(L_makeVec_oneArg); //only one arg, make-vector with unspecified content" nl
			"/* didn't jump, fill the vector with the second arg */" nl
			tab "MOV(R2, FPARG(3)); //the value" nl
			tab "CMP(R1, IMM(0));" nl
			tab "JUMP_EQ(L_makeVec_Exit);" nl
			"L_makeVec_twoArgs_BeginPush:" nl
			tab "PUSH(R2);" nl
			tab "DECR(R1);" nl
			tab "CMP(R1, IMM(0));" nl
			tab "JUMP_NE(L_makeVec_twoArgs_BeginPush);" nl
			tab "JUMP(L_makeVec_Exit);" nl
			"L_makeVec_oneArg:" nl
			tab "CMP(R1, IMM(0));" nl
			tab "JUMP_EQ(L_makeVec_Exit);" nl
			"L_makeVec_oneArg_BeginPush:" nl
			tab "PUSH(IMM(0));" nl
			tab "CALL(MAKE_SOB_INTEGER);" nl
			tab "DROP(1);" nl
			tab "PUSH(R0)" nl
			tab "DECR(R1);" nl
			tab "CMP(R1, IMM(0));" nl
			tab "JUMP_NE(L_makeVec_oneArg_BeginPush);" nl
			"L_makeVec_Exit:" nl
			"/* done pushing the vector content */" nl
			tab "MOV(R1, FPARG(2));" nl
			tab "PUSH(INDD(R1,1)); //size of vector" nl
			tab "CALL(MAKE_SOB_VECTOR);" nl
			tab "DROP(INDD(FPARG(2),1) + 1); //drop unnecessary values from stack" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_makeVec_cont:" nl
			tab "MOV(IND(70), IMM(T_CLOSURE));" nl
			tab "MOV(IND(71), IMM(400183));" nl
			tab "MOV(IND(72), LABEL(L_prim_makeVec));" nl
			"#define SOB_PRIM_MAKE_VECTOR 70" nl
		)
	)
)

(define prim_remainder
	(lambda ()
		(string-append
			"/* primitive remainder  */" nl
			"JUMP(L_remainder_cont);" nl
			"L_prim_remainder:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "MOV(R0, INDD(FPARG(2),1)); //first value as long value" nl
			tab "REM(R0, INDD(FPARG(3),1)); //use remainder proc with the second value as long value" nl
			tab "PUSH(R0);" nl
			tab "CALL(MAKE_SOB_INTEGER);" nl
			tab "DROP(1);" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_remainder_cont:" nl
			tab "MOV(IND(73), IMM(T_CLOSURE));" nl
			tab "MOV(IND(74), IMM(722858));" nl
			tab "MOV(IND(75), LABEL(L_prim_remainder));" nl
			"#define SOB_PRIM_REMAINDER 73" nl
		)
	)
)

(define prim_apply
	(lambda ()
		(string-append
			"/* primitive apply */" nl
			"JUMP(L_apply_cont);" nl
			"L_prim_apply:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "/* determine list size */" nl
			tab "MOV(R1,IMM(0)); //R1 will hold list size" nl
			tab "MOV(R0, FPARG(3)); //list" nl
			tab "L_apply_size_Begin:" nl
			tab tab "CMP(IND(R0), T_PAIR);" nl
			tab tab "JUMP_NE(L_apply_size_End);" nl
			tab tab "INCR(R1);" nl
			tab tab "MOV(R0, INDD(R0,2));" nl
			tab tab "JUMP(L_apply_size_Begin);" nl
			tab "L_apply_size_End:" nl
			tab"/* done calculating list size, R1 holds it */" nl
			tab "MOV(R2, R1); //save the size for later use" nl
			tab "INCR(R1); //include the magic box" nl
			tab "/* start pushing the list args to stack (last first) */" nl
			tab "PUSH(IMM(SOB_NIL)); //MAGIC BOX" nl
			tab "L_apply_begin_push:" nl
			tab tab "CMP(R2, IMM(0));" nl
			tab tab "JUMP_EQ(L_apply_end_push);" nl
			tab tab "//loop that finds the current arg to push" nl
			tab tab "MOV(R3, R2);" nl
			tab tab "DECR(R3); //R3 holds number of inner iterations" nl
			tab tab "MOV(R0, FPARG(3)); //first pair in list" nl
			tab tab "L_apply_begin_search:" nl
			tab tab tab "CMP(R3, IMM(0));" nl
			tab tab tab "JUMP_EQ(L_apply_end_search);" nl
			tab tab tab "MOV(R0, INDD(R0,2)); //next pair" nl
			tab tab tab "DECR(R3);" nl
			tab tab tab "JUMP(L_apply_begin_search);" nl
			tab tab "L_apply_end_search:" nl	
			tab tab "PUSH(INDD(R0,1));" nl
			tab tab "DECR(R2);" nl
			tab tab "JUMP(L_apply_begin_push);" nl
			tab "L_apply_end_push:" nl
			tab "PUSH(R1); //pushing args size to stack" nl
			tab "// done pushing args, now handling proc" nl
			tab "MOV(R0, FPARG(2)); //proc" nl
			tab "CMP(IND(R0) , T_CLOSURE);" nl
			tab "JUMP_NE(L_apply_not_proc);" nl
			tab "PUSH(INDD(R0,1));  // env" nl
			tab "PUSH(FPARG(-1)); // return address from current frame" nl
			tab "MOV(R2,FPARG(-2)); // save FP" nl
			tab "//start overriding old frame" nl
			tab "MOV(R3, R1);" nl
			tab "ADD(R3, IMM(3)); //R3 holds loop size" nl
			tab "MOV(R4, FPARG(1)); //number of old arguments" nl
			tab "ADD(R4,IMM(1)); //R4 points to first old param from FPARG point of view" nl
			tab "MOV(R5, STARG(1)); //number of new arguments" nl
			tab "ADD(R5, IMM(1)); //R5 points to first new param from STARG point of view" nl
			tab "L_apply_override:" nl
			tab tab "MOV(R6, STARG(R5));" nl
			tab tab "MOV(FPARG(R4),R6); //overriding" nl
			tab tab "SUB(R3,1);" nl
			tab tab "SUB(R4,1); //next old param" nl
			tab tab "SUB(R5,1); //next new param" nl
			tab tab "CMP(R3, IMM(0));" nl
			tab tab "JUMP_NE(L_apply_override);" nl
			tab "//end overriding" nl
			;; we can determine the DROP value at compile time
			tab "//complete the override by dropping unnecessary items from stack" nl
			tab "DROP(IMM(7)); //apply had 7 values on stack before" nl
			tab "MOV(FP,R2); //Restore old FP in preparation of JUMP" nl
			tab "JUMPA(INDD(R0,2));  //code" nl
			tab "L_apply_not_proc:" nl
			tab "SHOW(\"Exception: attempt to apply non-procedure \", R0);" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_apply_cont:" nl
			tab "MOV(IND(76), IMM(T_CLOSURE));" nl
			tab "MOV(IND(77), IMM(864017));" nl
			tab "MOV(IND(78), LABEL(L_prim_apply));" nl
			"#define SOB_PRIM_APPLY 76" nl

		)
	)
)

(define prim_char->integer
	(lambda ()
		(string-append
			"/* primitive char->integer  */" nl
			"JUMP(L_char_int_cont);" nl
			"L_prim_char_int:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(INDD(FPARG(2),1)); //the char" nl
			tab "CALL(MAKE_SOB_INTEGER);" nl
			tab "DROP(1);" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_char_int_cont:" nl
			tab "MOV(IND(79), IMM(T_CLOSURE));" nl
			tab "MOV(IND(80), IMM(508854));" nl
			tab "MOV(IND(81), LABEL(L_prim_char_int));" nl
			"#define SOB_PRIM_CHAR_TO_INTEGER 79" nl
		)
	)
)

(define prim_integer->char
	(lambda ()
		(string-append
			"/* primitive integer->char  */" nl
			"JUMP(L_int_char_cont);" nl
			"L_prim_int_char:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "PUSH(INDD(FPARG(2),1)); //the integer" nl
			tab "CALL(MAKE_SOB_CHAR);" nl
			tab "DROP(1);" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_int_char_cont:" nl
			tab "MOV(IND(82), IMM(T_CLOSURE));" nl
			tab "MOV(IND(83), IMM(414227));" nl
			tab "MOV(IND(84), LABEL(L_prim_int_char));" nl
			"#define SOB_PRIM_INTEGER_TO_CHAR 82" nl
		)
	)
)

;;; TODO: eq? for symbol (compare strings)
;;; for now eq? for symbol via addresses
(define prim_eq
	(lambda ()
		(string-append
			"/* primitive eq?  */" nl
			"JUMP(L_eq_cont);" nl
			"L_prim_eq:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "MOV(R0, FPARG(2)); //first expr" nl
			tab "MOV(R1, FPARG(3)); //second expr" nl
			tab "CMP(IND(R0),IND(R1)); //check type" nl
			tab "JUMP_NE(L_eq_False);" nl
			tab "CMP(IND(R0), T_VOID);" nl
			tab "JUMP_EQ(L_eq_check_data);" nl
			tab "CMP(IND(R0), T_NIL);" nl
			tab "JUMP_EQ(L_eq_check_data);" nl
			tab "CMP(IND(R0), T_BOOL);" nl
			tab "JUMP_EQ(L_eq_check_data);" nl
			tab "CMP(IND(R0), T_CHAR);" nl
			tab "JUMP_EQ(L_eq_check_data);" nl
			tab "CMP(IND(R0), T_INTEGER);" nl
			tab "JUMP_EQ(L_eq_check_data);" nl
			tab "CMP(IND(R0), T_CLOSURE);" nl
			tab "JUMP_EQ(L_eq_check_address);" nl
			tab "CMP(IND(R0), T_STRING);" nl
			tab "JUMP_EQ(L_eq_check_address);" nl
			tab "CMP(IND(R0), T_PAIR);" nl
			tab "JUMP_EQ(L_eq_check_address);" nl
			tab "CMP(IND(R0), T_VECTOR);" nl
			tab "JUMP_EQ(L_eq_check_address);" nl
			tab "CMP(IND(R0), T_SYMBOL);" nl
			tab "JUMP_EQ(L_eq_check_address);" nl
			"L_eq_check_address:" nl
			tab "CMP(R0,R1); //check by addresses" nl
			tab "JUMP_NE(L_eq_False);" nl
			tab "MOV(R0, SOB_TRUE);" nl
			tab "JUMP(L_eq_Exit);" nl
			"L_eq_check_data:" nl
			tab "CMP(INDD(R0,1), INDD(R1,1)); //check by data" nl
			tab "JUMP_NE(L_eq_False);" nl
			tab "MOV(R0, SOB_TRUE);" nl
			tab "JUMP(L_eq_Exit);" nl
			"L_eq_check_symbol:" nl
			"L_eq_False:" nl
			tab "MOV(R0, SOB_FALSE);" nl
			"L_eq_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_eq_cont:" nl
			tab "MOV(IND(85), IMM(T_CLOSURE));" nl
			tab "MOV(IND(86), IMM(572874));" nl
			tab "MOV(IND(87), LABEL(L_prim_eq));" nl
			"#define SOB_PRIM_EQ 85" nl
		)
	)
)

(define prim_symbol->string
	(lambda ()
		(string-append
			"/* primitive symbol->string */" nl
			"JUMP(L_symbol_to_string_cont);" nl
			"L_symbol_to_string:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "MOV(R1, INDD(FPARG(2),1));" nl
			tab "MOV(R2, IMM(1));" nl
			tab "MOV(R3, INDD(FPARG(2),1));" nl
			tab "INCR(R3);" nl
			tab "L_next_var_1:" nl
			tab "INCR(R2);" nl
			tab "PUSH(INDD(FPARG(2),IMM(R2)));" nl
			tab "CMP(R3, R2);" nl
			tab "JUMP_NE(L_next_var_1);" nl 
			tab "PUSH(INDD(FPARG(2),1));" nl
			tab "CALL(MAKE_SOB_STRING);" nl
			tab "DROP(IMM(R3));" nl
			"L_prim_symbol_to_string_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_symbol_to_string_cont:" nl
			tab "MOV(IND(88), IMM(T_CLOSURE));" nl
			tab "MOV(IND(89), IMM(294755));" nl
			tab "MOV(IND(90), LABEL(L_symbol_to_string));" nl
			"#define SOB_PRIM_SYMBOL_TO_STRING 88" nl
		)
	)
)

(define prim_string->symbol
	(lambda ()
		(string-append
			"/* primitive string->symbol */" nl
			"JUMP(L_string_to_symbol_cont);" nl
			"L_string_to_symbol:" nl
  			tab "PUSH(FP); " nl                      
  			tab "MOV(FP, SP); "  nl                 
  			tab "MOV(R1,FPARG(2));" nl
  			tab "MOV(R2,0);" nl
		    "L_str_to_sym_loop:" nl
		    tab "CMP(INDD(506,R2),T_SYMBOL);" nl 
		    tab "JUMP_NE(L_str_to_sym_loop_end);" nl		
		    tab "CMP(INDD(R2,507),R1);"nl
		    tab "JUMP_EQ(L_str_to_sym_find);" nl
			"L_str_to_sym_loop_end:"
		    tab "CMP(R2,IND(3));" nl
		    tab "ADD(R2,IMM(1));" nl
		    tab "JUMP_LT(L_str_to_sym_loop);" nl
			tab "MOV(R2,IND(4))" nl
			tab "LOOP_LINKED_LIST:" nl
		    tab "CMP(INDD(R2,2),0);" nl
		    tab "JUMP_EQ(L_str_to_sym_mall);" nl
		    tab "CMP(INDD(R2,2),R1);" nl
		    tab "JUMP_NE(L_str_to_sym_lend);" nl		
		    tab "MOV(R0,R2);" nl
		    tab "ADD(R0,1);" nl
		    tab "JUMP(string_to_symbol_exit_label);" nl    
			tab "L_str_to_sym_lend:" nl
		    tab "MOV(R2,IND(R2));" nl
		    tab "JUMP(LOOP_LINKED_LIST);" nl
			"L_str_to_sym_mall:" nl
		    tab "PUSH(IMM(3));" nl
		    tab "CALL(MALLOC);" nl
		    tab "DROP(1);" nl
		    tab "MOV(INDD(R2,0),R0);" nl
		    tab "MOV(INDD(R2,1),T_SYMBOL);" nl
		    tab "MOV(INDD(R2,0),R1);" nl
		    tab "MOV(R0,R1);" nl
		    tab "ADD(R0,1);" nl
		    tab "JUMP(string_to_symbol_exit_label);" nl
			"L_str_to_sym_find:" nl
		    tab "MOV(R0,R2);" nl
		    tab "ADD(R0,506);" nl
			"string_to_symbol_exit_label:" nl
			tab "MOV(R0, IND(R0));" nl
		 	tab "POP(FP);" nl
		  	tab "RETURN; " nl
		  	"L_string_to_symbol_cont:" nl
			tab "MOV(IND(91), IMM(T_CLOSURE));" nl
			tab "MOV(IND(92), IMM(989204));" nl
			tab "MOV(IND(93), LABEL(L_string_to_symbol));" nl
			"#define SOB_PRIM_STRING_TO_SYMBOL 91" nl
		)
 	 )
)

(define prim+
	(lambda ()
		(string-append
			"/* primitive plus (+)  */" nl
			"JUMP(L_plus_cont);" nl
			"L_prim_plus:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP,SP);" nl
			tab "MOV(R0,IMM(0));" nl
			tab "MOV(R1,FPARG(1)); //number of elements" nl
			tab "DECR(R1); //exclude magic box " nl
			tab "CMP(R1,0);" nl
			tab "JUMP_EQ(L_plus_Exit);" nl
			tab "DECR(R1); // R1 holds number of loops " nl
			tab "MOV(R2,IMM(3));" nl
			tab "MOV(R0,FPARG(2)); //first element of the sum " nl
			tab "MOV(R0,INDD(R0,1));" nl
			"L_plus_begin_loop:" nl
			tab "CMP(R1,IMM(0)); " nl
			tab "JUMP_EQ(L_plus_Exit);" nl
			tab "MOV(R3,FPARG(R2));//the next element to add" nl
			tab "MOV(R3,INDD(R3,1));" nl
			tab "ADD(R0,R3);//acumulating" nl
			tab "INCR(R2);" nl
			tab "DECR(R1);" nl
			tab "JUMP(L_plus_begin_loop);" nl
			"L_plus_Exit:" nl
			tab "PUSH(R0);" nl
			tab "CALL(MAKE_SOB_INTEGER); //create the SOB " nl
			tab "DROP(1); " nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_plus_cont:" nl
			tab "MOV(IND(94), IMM(T_CLOSURE));" nl
			tab "MOV(IND(95), IMM(777096));" nl
			tab "MOV(IND(96), LABEL(L_prim_plus));" nl
			"#define SOB_PRIM_PLUS 94" nl
		)
	)
)

(define prim-
	(lambda ()
		(string-append
			"/* primitive subtract (-)  */" nl
			"JUMP(L_subtract_cont);" nl
			"L_prim_subtract:" nl
			"PUSH(FP);" nl
			"MOV(FP,SP);" nl
			"MOV(R1,FPARG(1)); //number of elements" nl
			"DECR(R1); //exclude magic box " nl
			"CMP(R1,1); //check for special case with 1 argument " nl
			"JUMP_EQ(L_substract_special);" nl
			"DECR(R1); // R1 holds number of loops" nl
			"MOV(R2,IMM(3));" nl
			"MOV(R0,FPARG(2)); //first element" nl
			"MOV(R0,INDD(R0,1));" nl
			"L_substract_begin_loop:" nl
			"CMP(R1,IMM(0));" nl
			"JUMP_EQ(L_substract_Exit);" nl 
			"MOV(R3,FPARG(R2)); //the next element to subtract" nl
			"MOV(R3,INDD(R3,1));" nl
			"SUB(R0,R3); //result" nl
			"INCR(R2);" nl
			"DECR(R1);" nl
			"JUMP(L_substract_begin_loop);" nl
			"L_substract_special:" nl
			"MOV(R1,FPARG(2));" nl
			"MOV(R1,INDD(R1,1));" nl
			"MOV(R0,IMM(0));" nl
			"SUB(R0,R1);" nl

			"L_substract_Exit:" nl
			"PUSH(R0);" nl
			"CALL(MAKE_SOB_INTEGER); //create the SOB" nl
			"DROP(1);" nl
			"POP(FP);" nl
			"RETURN;" nl
			"L_subtract_cont:" nl
			tab "MOV(IND(97), IMM(T_CLOSURE));" nl
			tab "MOV(IND(98), IMM(155936));" nl
			tab "MOV(IND(99), LABEL(L_prim_subtract));" nl
			"#define SOB_PRIM_SUBTRACT 97" nl
		)
	)
)

(define prim*
	(lambda ()
		(string-append
			"/* primitive multiplication (*)  */" nl
			"JUMP(L_mult_cont);" nl
			"L_prim_mult:" nl
			"PUSH(FP);" nl
			"MOV(FP,SP);" nl
			"MOV(R0,IMM(1));" nl
			"MOV(R1,FPARG(1)); //number of elements" nl
			"DECR(R1); //exclude magic box " nl
			"CMP(R1,IMM(0));" nl
			"JUMP_EQ(L_mult_Exit);" nl
			"DECR(R1); // R1 holds number of loops" nl
			"MOV(R2,IMM(3));" nl
			"MOV(R0,FPARG(2)); //first element" nl
			"MOV(R0,INDD(R0,1));" nl
			"L_mult_begin_loop:" nl
			"CMP(R1,IMM(0)); " nl
			"JUMP_EQ(L_mult_Exit);" nl
			"MOV(R3,FPARG(R2)); //the next element" nl
			"MOV(R3,INDD(R3,1));" nl
			"MUL(R0,R3);//result" nl
			"INCR(R2);" nl
			"DECR(R1);" nl
			"JUMP(L_mult_begin_loop);" nl
			"L_mult_Exit:" nl 
			"PUSH(R0);" nl
			"CALL(MAKE_SOB_INTEGER); //create the SOB" nl
			"DROP(1);" nl
			"POP(FP);" nl
			"RETURN;" nl

			"L_mult_cont:" nl
			"MOV(IND(100), IMM(T_CLOSURE));" nl
			"MOV(IND(101), IMM(721327));" nl
			"MOV(IND(102), LABEL(L_prim_mult));" nl
			"#define SOB_PRIM_MULTIPLY 100" nl
		)
	)
)

(define prim/
	(lambda ()
		(string-append
			"/* primitive divide (/)  */" nl
			"JUMP(L_div_cont);" nl
			"L_prim_div:" nl
			"PUSH(FP);" nl
			"MOV(FP, SP);" nl
			"MOV(R1,FPARG(1)); //number of elements" nl
			"DECR(R1); //exclude magic box " nl
			"DECR(R1); // R1 holds number of loops" nl
			"MOV(R2,IMM(3));" nl
			"MOV(R0,FPARG(2)); //first element" nl
			"MOV(R0,INDD(R0,1));" nl
			"L_div_begin_loop:" nl
			"CMP(R1,IMM(0));" nl
			"JUMP_EQ(L_div_Exit);" nl
			"MOV(R3,FPARG(R2)); //next element" nl
			"MOV(R3,INDD(R3,1));" nl
			"DIV(R0,R3);//the result" nl
			"INCR(R2);" nl
			"DECR(R1);" nl
			"JUMP(L_div_begin_loop);" nl
			"L_div_Exit:" nl
			"PUSH(R0);" nl
			"CALL(MAKE_SOB_INTEGER); //create the SOB" nl
			"DROP(1);" nl
			"POP(FP);" nl
			"RETURN;" nl
			"L_div_cont:" nl
			"MOV(IND(103), IMM(T_CLOSURE));" nl
			"MOV(IND(104), IMM(775216));" nl
			"MOV(IND(105), LABEL(L_prim_div));" nl
			"#define SOB_PRIM_DIVIDE 103" nl
		)
	)
)

(define prim<?
	(lambda ()
		(string-append
			"/* primitive smaller than (<)  */" nl
			"JUMP(L_smaller_cont);" nl
			"L_prim_smaller:" nl
			"PUSH(FP);" nl
			"MOV(FP,SP);" nl
			"MOV(R1,FPARG(1)); //R1 holds num of args" nl
			"DECR(R1); //exclude magic box " nl
			"MOV(R5,R1); //save number of args" nl
			"DECR(R5);" nl
			"MOV(R2, FPARG(2)); //first arg" nl
			"MOV(R3, FPARG(3)); //second arg" nl
			"MOV(R4, IMM(2)); //index for fparg" nl
			"L_smaller_begin_loop:"
			"CMP(R5,IMM(0)); " nl
			"JUMP_EQ(L_smaller_True);" nl
			"MOV(R2,FPARG(R4)); // LEFT ELEMENT" nl
			"MOV(R2,INDD(R2,IMM(1))); " nl
			"INCR(R4);" nl
			"MOV(R3,FPARG(R4)); // right ELEMENT" nl
			"MOV(R3,INDD(R3,IMM(1))); " nl
			"CMP(R2,R3); " nl
			"JUMP_GE(L_smaller_False);" nl
			"DECR(R5);" nl
			"JUMP(L_smaller_begin_loop);" nl
			"L_smaller_True:"
			"MOV(R0,IMM(SOB_TRUE)); //moving result of true" nl
			"JUMP(L_smaller_Exit);" nl
			"L_smaller_False:" nl
			"MOV(R0,IMM(SOB_FALSE)); // moving result false" nl
			"JUMP(L_smaller_Exit);" nl
			"L_smaller_Exit:" nl
			"POP(FP);" nl
			"RETURN;" nl
			"L_smaller_cont:" nl
			"MOV(IND(106), IMM(T_CLOSURE));" nl
			"MOV(IND(107), IMM(922870));" nl
			"MOV(IND(108), LABEL(L_prim_smaller));" nl
			"#define SOB_PRIM_SMALLER 106" nl
		)
	)
)

(define prim>?
	(lambda ()
		(string-append
			"/* primitive greater than (>)  */" nl
			"JUMP(L_greater_cont);" nl
			"L_prim_greater:" nl
			"PUSH(FP);" nl
			"MOV(FP,SP);" nl
			"MOV(R1,FPARG(1)); //R1 holds num of args" nl
			"DECR(R1); //exclude magic box " nl
			"MOV(R5,R1); //save number of args" nl
			"DECR(R5);" nl
			"MOV(R2, FPARG(2)); //first arg" nl
			"MOV(R3, FPARG(3)); //second arg" nl
			"MOV(R4, IMM(2)); //index for fparg" nl
			"L_greater_begin_loop:"
			"CMP(R5,IMM(0)); " nl
			"JUMP_EQ(L_greater_True);" nl
			"MOV(R2,FPARG(R4)); // LEFT ELEMENT" nl
			"MOV(R2,INDD(R2,IMM(1))); " nl
			"INCR(R4);" nl
			"MOV(R3,FPARG(R4)); // right ELEMENT" nl
			"MOV(R3,INDD(R3,IMM(1))); " nl
			"CMP(R2,R3); " nl
			"JUMP_LE(L_greater_False);" nl
			"DECR(R5);" nl
			"JUMP(L_greater_begin_loop);" nl
			"L_greater_True:"
			"MOV(R0,IMM(SOB_TRUE)); //moving result of true" nl
			"JUMP(L_greater_Exit);" nl
			"L_greater_False:" nl
			"MOV(R0,IMM(SOB_FALSE)); // moving result false" nl
			"JUMP(L_greater_Exit);" nl
			"L_greater_Exit:" nl
			"POP(FP);" nl
			"RETURN;" nl
			"L_greater_cont:" nl
			"MOV(IND(109), IMM(T_CLOSURE));" nl
			"MOV(IND(110), IMM(922870));" nl
			"MOV(IND(111), LABEL(L_prim_greater));" nl
			"#define SOB_PRIM_GREATER 109" nl
		)
	)
)

(define prim=?
	(lambda ()
		(string-append
			"/* primitive binary equal (=)  */" nl
			"JUMP(L_equal_cont);" nl
			"L_prim_equal:" nl
			"PUSH(FP);" nl
			"MOV(FP,SP);" nl
			"MOV(R1,FPARG(1)); //R1 holds num of args" nl
			"DECR(R1); //exclude magic box " nl
			"ADD(R1, IMM(2)); // r1 hold n+2" nl
			"MOV(R2,IMM(3)); //current arg tested" nl
			"MOV(R3,FPARG(2)); " nl
			"MOV(R3,INDD(R3,IMM(1))); " nl
			"L_equal_begin_loop:" nl
			"CMP(R2,R1);"
			"JUMP_EQ(L_equal_True);" nl
			"MOV(R7,FPARG(R2));" nl
			"MOV(R7,INDD(R7,IMM(1))); " nl
			"CMP(R7,R3); " nl
			"JUMP_NE(L_equal_False);" nl
			"INCR(R2);"
			"JUMP(L_equal_begin_loop);" nl
			"L_equal_True:" nl
 			"MOV(R0,IMM(SOB_TRUE)); //moving result of true" nl
			"JUMP(L_equal_Exit);" nl
			"L_equal_False:" nl
			"MOV(R0,IMM(SOB_FALSE)); // moving result false" nl
			"JUMP(L_equal_Exit);" nl
			"L_equal_Exit:" nl
			"POP(FP);" nl
			"RETURN;" nl
			"L_equal_cont:" nl
			"MOV(IND(112), IMM(T_CLOSURE));" nl
			"MOV(IND(113), IMM(152305));" nl
			"MOV(IND(114), LABEL(L_prim_equal));" nl
			"#define SOB_PRIM_EQUAL 112" nl
		)
	)
)
