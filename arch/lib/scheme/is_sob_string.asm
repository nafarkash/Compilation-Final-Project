/* scheme/is_sob_string.asm
 * Take pointers to a Scheme object, and places in R0 either 0 or 1
 * (long, not Scheme integer objects or Scheme boolean objets),
 * depending on whether the argument is a string.
 * 
 * Programmer: Naor Farcas, 2014 (based on Mayer code)
 */

 IS_SOB_STRING:
  PUSH(FP);
  MOV(FP, SP);
  MOV(R0, FPARG(0));
  CMP(IND(R0), T_STRING);
  JUMP_EQ(L_IS_SOB_STRING_TRUE);
  MOV(R0, IMM(0));
  JUMP(L_IS_SOB_STRING_EXIT);
 L_IS_SOB_STRING_TRUE:
  MOV(R0, IMM(1));
 L_IS_SOB_STRING_EXIT:
  POP(FP);
  RETURN;


