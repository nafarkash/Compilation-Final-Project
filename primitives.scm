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
			tab "PUSH(FPARG(2)); //param" nl
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
			tab "MOV(R0, INDD(R0,1)); //second memory cell is the size" nl
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
			tab "MOV(R0, INDD(R0,1)); //second memory cell is the size" nl
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
			"JUMP(L_set-car_cont);" nl
			"L_prim_set-car:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "MOV(R0, FPARG(2)); // the pair" nl
			tab "CMP(IND(R0), T_PAIR);" nl
			tab "JUMP_NE(L_set-car_ERROR);" nl
			tab "MOV(R1, FPARG(3)); // new value" nl
			tab "MOV(INDD(R0,1), R1); // set!" nl
			tab "MOV(R0, SOB_VOID); //set-car! returns void" nl
			tab "JUMP(L_set-car_Exit);" nl
			"L_set-car_ERROR:" nl
			tab "SHOW(\"Exception in set-car!, This is not a pair: \", R0);" nl 
			"L_set-car_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_set-car_cont:" nl
			tab "MOV(IND(49), IMM(T_CLOSURE));" nl
			tab "MOV(IND(50), IMM(569917));" nl
			tab "MOV(IND(51), LABEL(L_prim_set-car));" nl
			"#define SOB_PRIM_SET_CAR 49" nl
		)
	)
)

(define prim_set-cdr!
	(lambda ()
		(string-append
			"/* primitive set-cdr!  */" nl
			"JUMP(L_set-cdr_cont);" nl
			"L_prim_set-cdr:" nl
			tab "PUSH(FP);" nl
			tab "MOV(FP, SP);" nl
			tab "MOV(R0, FPARG(2)); // the pair" nl
			tab "CMP(IND(R0), T_PAIR);" nl
			tab "JUMP_NE(L_set-cdr_ERROR);" nl
			tab "MOV(R1, FPARG(3)); // new value" nl
			tab "MOV(INDD(R0,2), R1); // set!" nl
			tab "MOV(R0, SOB_VOID); //set-cdr! returns void" nl
			tab "JUMP(L_set-cdr_Exit);" nl
			"L_set-cdr_ERROR:" nl
			tab "SHOW(\"Exception in set-cdr!, This is not a pair: \", R0);" nl 
			"L_set-cdr_Exit:" nl
			tab "POP(FP);" nl
			tab "RETURN;" nl
			"L_set-cdr_cont:" nl
			tab "MOV(IND(52), IMM(T_CLOSURE));" nl
			tab "MOV(IND(53), IMM(510364));" nl
			tab "MOV(IND(54), LABEL(L_prim_set-cdr));" nl
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
			tab "MOV(R1, FPARG(3)); //position in vector" nl
			tab "MOV(R2, FPARG(4)); //new value"
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
			tab "MOV(R1, FPARG(3)); //position in string" nl
			tab "MOV(R2, FPARG(4)); //new value"
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
			tab "MOV(R1, FPARG(3)); //positin in string" nl
			tab "MOV(R0, INDD(R0,R1)); //assuming R1 holds valid position" nl
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
			tab "MOV(R1, FPARG(3)); //positin in vector" nl
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