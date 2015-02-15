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


//begin expr: (applic (applic (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0))))))))) ((applic (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))))))) ((const #t))) ((const #f)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
MOV(R0, IMM(SOB_FALSE));
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0))))))))) ((applic (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))))))) ((const #t)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
MOV(R0, IMM(SOB_TRUE));
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0))))))))) ((applic (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))))
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
//begin expr: (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))
//env-size: 1    params-size: 1
PUSH(IMM(2)); //new env size: 2
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End2); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin2:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin2);
L_lambda_env_End2:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End2); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin2:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin2);
L_lambda_args_End2:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont2));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit2);
LlambdaCont2:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))
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
JUMP_NE(LnotProcedure9);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit8);
LnotProcedure9:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit8:
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
JUMP_NE(LnotProcedure8);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit7);
LnotProcedure8:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit7:
//end expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar x 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar x 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure7);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit6);
LnotProcedure7:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit6:
//end expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar x 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar x 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure6);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit5);
LnotProcedure6:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit5:
//end expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar x 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar x 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure5);
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
LprocOverride1:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride1);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure5:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit2:

//end expr: (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit1:

//end expr: (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))
//env-size: 0    params-size: 0
PUSH(IMM(1)); //new env size: 1
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End3); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin3:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin3);
L_lambda_env_End3:
// handling with params 
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End3); 
PUSH(IMM(0));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin3:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin3);
L_lambda_args_End3:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont3));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit3);
LlambdaCont3:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))
//env-size: 1    params-size: 1
PUSH(IMM(2)); //new env size: 2
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End4); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin4:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin4);
L_lambda_env_End4:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End4); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin4:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin4);
L_lambda_args_End4:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont4));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit4);
LlambdaCont4:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))
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
JUMP_NE(LnotProcedure14);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit12);
LnotProcedure14:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit12:
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
JUMP_NE(LnotProcedure13);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit11);
LnotProcedure13:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit11:
//end expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar x 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar x 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure12);
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
LprocOverride2:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride2);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure12:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit4:

//end expr: (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit3:

//end expr: (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))
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
JUMP_EQ(L_lambda_env_End5); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin5:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin5);
L_lambda_env_End5:
// handling with params 
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End5); 
PUSH(IMM(0));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin5:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin5);
L_lambda_args_End5:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont5));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit5);
LlambdaCont5:
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
JUMP_EQ(L_lambda_env_End6); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin6:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin6);
L_lambda_env_End6:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End6); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin6:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin6);
L_lambda_args_End6:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont6));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit6);
LlambdaCont6:
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
JUMP_NE(LnotProcedure18);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit15);
LnotProcedure18:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit15:
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
JUMP_NE(LnotProcedure17);
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
LprocOverride3:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride3);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure17:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit6:

//end expr: (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit5:

//end expr: (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))
//env-size: 0    params-size: 0
PUSH(IMM(1)); //new env size: 1
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End7); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin7:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin7);
L_lambda_env_End7:
// handling with params 
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End7); 
PUSH(IMM(0));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin7:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin7);
L_lambda_args_End7:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont7));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit7);
LlambdaCont7:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))
//env-size: 1    params-size: 1
PUSH(IMM(2)); //new env size: 2
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End8); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin8:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin8);
L_lambda_env_End8:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End8); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin8:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin8);
L_lambda_args_End8:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont8));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit8);
LlambdaCont8:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))
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
JUMP_NE(LnotProcedure21);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit17);
LnotProcedure21:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit17:
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
JUMP_NE(LnotProcedure20);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit16);
LnotProcedure20:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit16:
//end expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar x 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar x 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure19);
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
LprocOverride4:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride4);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure19:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit8:

//end expr: (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit7:

//end expr: (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure16);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit14);
LnotProcedure16:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit14:
//end expr: (applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))
//env-size: 0    params-size: 0
PUSH(IMM(1)); //new env size: 1
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End9); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin9:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin9);
L_lambda_env_End9:
// handling with params 
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End9); 
PUSH(IMM(0));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin9:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin9);
L_lambda_args_End9:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont9));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit9);
LlambdaCont9:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))
//env-size: 1    params-size: 1
PUSH(IMM(2)); //new env size: 2
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End10); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin10:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin10);
L_lambda_env_End10:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End10); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin10:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin10);
L_lambda_args_End10:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont10));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit10);
LlambdaCont10:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End11); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin11:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin11);
L_lambda_env_End11:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End11); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin11:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin11);
L_lambda_args_End11:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont11));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit11);
LlambdaCont11:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (pvar y 0))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End12); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin12:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin12);
L_lambda_env_End12:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End12); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin12:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin12);
L_lambda_args_End12:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont12));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit12);
LlambdaCont12:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar y 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar y 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit12:

//end expr: (lambda-simple (y) (pvar y 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit11:

//end expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End13); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin13:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin13);
L_lambda_env_End13:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End13); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin13:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin13);
L_lambda_args_End13:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont13));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit13);
LlambdaCont13:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End14); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin14:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin14);
L_lambda_env_End14:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End14); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin14:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin14);
L_lambda_args_End14:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont14));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit14);
LlambdaCont14:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar b 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar b 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End15); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin15:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin15);
L_lambda_env_End15:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End15); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin15:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin15);
L_lambda_args_End15:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont15));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit15);
LlambdaCont15:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End16); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin16:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin16);
L_lambda_env_End16:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End16); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin16:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin16);
L_lambda_args_End16:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont16));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit16);
LlambdaCont16:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End17); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin17:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin17);
L_lambda_env_End17:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End17); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin17:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin17);
L_lambda_args_End17:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont17));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit17);
LlambdaCont17:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar z 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar z 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (bvar n 1 0) ((bvar s 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar s 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar s 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar n 1 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(1))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar n 1 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure29);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit22);
LnotProcedure29:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit22:
//end expr: (applic (bvar n 1 0) ((bvar s 0 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure28);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit21);
LnotProcedure28:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit21:
//end expr: (applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar s 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar s 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure27);
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
LprocOverride7:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride7);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure27:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit17:

//end expr: (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit16:

//end expr: (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit15:

//end expr: (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure26);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit20);
LnotProcedure26:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit20:
//end expr: (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure25);
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
LprocOverride6:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride6);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure25:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit14:

//end expr: (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit13:

//end expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure24);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit19);
LnotProcedure24:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit19:
//end expr: (applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar b 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar b 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure23);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit18);
LnotProcedure23:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit18:
//end expr: (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure22);
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
LprocOverride5:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride5);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure22:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit10:

//end expr: (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit9:

//end expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure15);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit13);
LnotProcedure15:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit13:
//end expr: (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure11);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit10);
LnotProcedure11:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit10:
//end expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))
//env-size: 0    params-size: 0
PUSH(IMM(1)); //new env size: 1
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End18); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin18:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin18);
L_lambda_env_End18:
// handling with params 
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End18); 
PUSH(IMM(0));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin18:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin18);
L_lambda_args_End18:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont18));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit18);
LlambdaCont18:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))
//env-size: 1    params-size: 1
PUSH(IMM(2)); //new env size: 2
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End19); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin19:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin19);
L_lambda_env_End19:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End19); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin19:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin19);
L_lambda_args_End19:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont19));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit19);
LlambdaCont19:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End20); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin20:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin20);
L_lambda_env_End20:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End20); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin20:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin20);
L_lambda_args_End20:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont20));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit20);
LlambdaCont20:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (pvar y 0))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End21); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin21:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin21);
L_lambda_env_End21:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End21); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin21:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin21);
L_lambda_args_End21:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont21));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit21);
LlambdaCont21:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar y 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar y 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit21:

//end expr: (lambda-simple (y) (pvar y 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit20:

//end expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End22); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin22:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin22);
L_lambda_env_End22:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End22); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin22:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin22);
L_lambda_args_End22:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont22));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit22);
LlambdaCont22:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End23); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin23:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin23);
L_lambda_env_End23:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End23); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin23:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin23);
L_lambda_args_End23:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont23));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit23);
LlambdaCont23:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar b 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar b 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End24); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin24:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin24);
L_lambda_env_End24:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End24); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin24:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin24);
L_lambda_args_End24:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont24));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit24);
LlambdaCont24:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End25); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin25:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin25);
L_lambda_env_End25:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End25); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin25:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin25);
L_lambda_args_End25:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont25));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit25);
LlambdaCont25:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End26); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin26:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin26);
L_lambda_env_End26:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End26); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin26:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin26);
L_lambda_args_End26:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont26));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit26);
LlambdaCont26:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar z 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar z 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (bvar n 1 0) ((bvar s 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar s 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar s 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar n 1 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(1))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar n 1 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure37);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit27);
LnotProcedure37:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit27:
//end expr: (applic (bvar n 1 0) ((bvar s 0 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure36);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit26);
LnotProcedure36:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit26:
//end expr: (applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar s 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar s 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure35);
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
LprocOverride10:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride10);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure35:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit26:

//end expr: (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit25:

//end expr: (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit24:

//end expr: (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure34);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit25);
LnotProcedure34:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit25:
//end expr: (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure33);
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
LprocOverride9:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride9);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure33:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit23:

//end expr: (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit22:

//end expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure32);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit24);
LnotProcedure32:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit24:
//end expr: (applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar b 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar b 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure31);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit23);
LnotProcedure31:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit23:
//end expr: (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure30);
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
LprocOverride8:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride8);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure30:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit19:

//end expr: (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit18:

//end expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure10);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit9);
LnotProcedure10:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit9:
//end expr: (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure4);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit4);
LnotProcedure4:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit4:
//end expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0))))))))) ((applic (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))))
//env-size: 0    params-size: 0
PUSH(IMM(1)); //new env size: 1
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End27); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin27:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin27);
L_lambda_env_End27:
// handling with params 
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End27); 
PUSH(IMM(0));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin27:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin27);
L_lambda_args_End27:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont27));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit27);
LlambdaCont27:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))
//env-size: 1    params-size: 1
PUSH(IMM(2)); //new env size: 2
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End28); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin28:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin28);
L_lambda_env_End28:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End28); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin28:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin28);
L_lambda_args_End28:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont28));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit28);
LlambdaCont28:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))
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
JUMP_NE(LnotProcedure44);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit33);
LnotProcedure44:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit33:
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
JUMP_NE(LnotProcedure43);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit32);
LnotProcedure43:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit32:
//end expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar x 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar x 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure42);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit31);
LnotProcedure42:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit31:
//end expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar x 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar x 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure41);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit30);
LnotProcedure41:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit30:
//end expr: (applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar x 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar x 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure40);
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
LprocOverride11:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride11);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure40:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit28:

//end expr: (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit27:

//end expr: (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0)))))))))
//env-size: 0    params-size: 0
PUSH(IMM(1)); //new env size: 1
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End29); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin29:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin29);
L_lambda_env_End29:
// handling with params 
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End29); 
PUSH(IMM(0));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin29:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin29);
L_lambda_args_End29:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont29));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit29);
LlambdaCont29:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (pvar x 0))
//env-size: 1    params-size: 1
PUSH(IMM(2)); //new env size: 2
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End30); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin30:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin30);
L_lambda_env_End30:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End30); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin30:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin30);
L_lambda_args_End30:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont30));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit30);
LlambdaCont30:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar x 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar x 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit30:

//end expr: (lambda-simple (x) (pvar x 0))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (pvar x 0))
//env-size: 1    params-size: 1
PUSH(IMM(2)); //new env size: 2
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End31); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin31:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin31);
L_lambda_env_End31:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End31); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin31:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin31);
L_lambda_args_End31:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont31));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit31);
LlambdaCont31:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar x 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar x 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit31:

//end expr: (lambda-simple (x) (pvar x 0))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))))
//env-size: 1    params-size: 1
PUSH(IMM(2)); //new env size: 2
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End32); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin32:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin32);
L_lambda_env_End32:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End32); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin32:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin32);
L_lambda_args_End32:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont32));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit32);
LlambdaCont32:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End33); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin33:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin33);
L_lambda_env_End33:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End33); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin33:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin33);
L_lambda_args_End33:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont33));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit33);
LlambdaCont33:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End34); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin34:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin34);
L_lambda_env_End34:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End34); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin34:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin34);
L_lambda_args_End34:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont34));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit34);
LlambdaCont34:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar b 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar b 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar c 0) ((bvar a 1 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar a 1 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(1))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 1 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar c 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar c 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure50);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit37);
LnotProcedure50:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit37:
//end expr: (applic (pvar c 0) ((bvar a 1 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure49);
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
LprocOverride13:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride13);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure49:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit34:

//end expr: (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit33:

//end expr: (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit32:

//end expr: (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure48);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit36);
LnotProcedure48:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit36:
//end expr: (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure47);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit35);
LnotProcedure47:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit35:
//end expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0))))))))
//env-size: 1    params-size: 1
PUSH(IMM(2)); //new env size: 2
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End35); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin35:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin35);
L_lambda_env_End35:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End35); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin35:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin35);
L_lambda_args_End35:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont35));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit35);
LlambdaCont35:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0))))))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End36); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin36:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin36);
L_lambda_env_End36:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End36); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin36:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin36);
L_lambda_args_End36:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont36));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit36);
LlambdaCont36:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (a) (lambda-simple (b) (pvar b 0)))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End37); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin37:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin37);
L_lambda_env_End37:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End37); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin37:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin37);
L_lambda_args_End37:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont37));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit37);
LlambdaCont37:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (pvar b 0))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End38); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin38:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin38);
L_lambda_env_End38:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End38); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin38:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin38);
L_lambda_args_End38:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont38));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit38);
LlambdaCont38:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar b 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar b 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit38:

//end expr: (lambda-simple (b) (pvar b 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit37:

//end expr: (lambda-simple (a) (lambda-simple (b) (pvar b 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure55);
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
LprocOverride15:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride15);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure55:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit36:

//end expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure54);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit40);
LnotProcedure54:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit40:
//end expr: (applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0))))))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End39); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin39:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin39);
L_lambda_env_End39:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End39); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin39:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin39);
L_lambda_args_End39:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont39));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit39);
LlambdaCont39:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End40); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin40:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin40);
L_lambda_env_End40:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End40); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin40:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin40);
L_lambda_args_End40:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont40));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit40);
LlambdaCont40:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (bvar a 0 0))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End41); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin41:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin41);
L_lambda_env_End41:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End41); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin41:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin41);
L_lambda_args_End41:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont41));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit41);
LlambdaCont41:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit41:

//end expr: (lambda-simple (b) (bvar a 0 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit40:

//end expr: (lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure58);
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
LprocOverride16:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride16);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure58:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit39:

//end expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure57);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit42);
LnotProcedure57:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit42:
//end expr: (applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End42); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin42:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin42);
L_lambda_env_End42:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End42); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin42:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin42);
L_lambda_args_End42:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont42));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit42);
LlambdaCont42:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End43); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin43:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin43);
L_lambda_env_End43:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End43); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin43:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin43);
L_lambda_args_End43:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont43));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit43);
LlambdaCont43:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End44); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin44:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin44);
L_lambda_env_End44:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End44); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin44:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin44);
L_lambda_args_End44:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont44));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit44);
LlambdaCont44:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (pvar y 0))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End45); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin45:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin45);
L_lambda_env_End45:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End45); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin45:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin45);
L_lambda_args_End45:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont45));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit45);
LlambdaCont45:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar y 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar y 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit45:

//end expr: (lambda-simple (y) (pvar y 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit44:

//end expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End46); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin46:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin46);
L_lambda_env_End46:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End46); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin46:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin46);
L_lambda_args_End46:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont46));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit46);
LlambdaCont46:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End47); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin47:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin47);
L_lambda_env_End47:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End47); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin47:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin47);
L_lambda_args_End47:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont47));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit47);
LlambdaCont47:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar b 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar b 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End48); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin48:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin48);
L_lambda_env_End48:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End48); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin48:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin48);
L_lambda_args_End48:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont48));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit48);
LlambdaCont48:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))
//env-size: 7    params-size: 1
PUSH(IMM(8)); //new env size: 8
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(7));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End49); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin49:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin49);
L_lambda_env_End49:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End49); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin49:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin49);
L_lambda_args_End49:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont49));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit49);
LlambdaCont49:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))
//env-size: 8    params-size: 1
PUSH(IMM(9)); //new env size: 9
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(8));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End50); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin50:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin50);
L_lambda_env_End50:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End50); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin50:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin50);
L_lambda_args_End50:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont50));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit50);
LlambdaCont50:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar z 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar z 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (bvar n 1 0) ((bvar s 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar s 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar s 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar n 1 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(1))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar n 1 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure66);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit47);
LnotProcedure66:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit47:
//end expr: (applic (bvar n 1 0) ((bvar s 0 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure65);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit46);
LnotProcedure65:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit46:
//end expr: (applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar s 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar s 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure64);
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
LprocOverride19:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride19);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure64:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit50:

//end expr: (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit49:

//end expr: (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit48:

//end expr: (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure63);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit45);
LnotProcedure63:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit45:
//end expr: (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure62);
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
LprocOverride18:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride18);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure62:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit47:

//end expr: (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit46:

//end expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure61);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit44);
LnotProcedure61:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit44:
//end expr: (applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar b 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar b 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure60);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit43);
LnotProcedure60:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit43:
//end expr: (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0)))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure59);
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
LprocOverride17:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride17);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure59:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit43:

//end expr: (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit42:

//end expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure56);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit41);
LnotProcedure56:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit41:
//end expr: (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure53);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit39);
LnotProcedure53:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit39:
//end expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0))))))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End51); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin51:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin51);
L_lambda_env_End51:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End51); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin51:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin51);
L_lambda_args_End51:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont51));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit51);
LlambdaCont51:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End52); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin52:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin52);
L_lambda_env_End52:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End52); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin52:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin52);
L_lambda_args_End52:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont52));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit52);
LlambdaCont52:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (bvar a 0 0))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End53); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin53:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin53);
L_lambda_env_End53:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End53); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin53:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin53);
L_lambda_args_End53:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont53));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit53);
LlambdaCont53:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit53:

//end expr: (lambda-simple (b) (bvar a 0 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit52:

//end expr: (lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure70);
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
LprocOverride20:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride20);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure70:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit51:

//end expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure69);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit50);
LnotProcedure69:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit50:
//end expr: (applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End54); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin54:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin54);
L_lambda_env_End54:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End54); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin54:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin54);
L_lambda_args_End54:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont54));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit54);
LlambdaCont54:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End55); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin55:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin55);
L_lambda_env_End55:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End55); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin55:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin55);
L_lambda_args_End55:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont55));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit55);
LlambdaCont55:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End56); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin56:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin56);
L_lambda_env_End56:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End56); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin56:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin56);
L_lambda_args_End56:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont56));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit56);
LlambdaCont56:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar z 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar z 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (bvar n 1 0) ((bvar s 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar s 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar s 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar n 1 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(1))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar n 1 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure73);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit52);
LnotProcedure73:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit52:
//end expr: (applic (bvar n 1 0) ((bvar s 0 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure72);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit51);
LnotProcedure72:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit51:
//end expr: (applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar s 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar s 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure71);
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
LprocOverride21:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride21);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure71:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit56:

//end expr: (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit55:

//end expr: (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit54:

//end expr: (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure68);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit49);
LnotProcedure68:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit49:
//end expr: (applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End57); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin57:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin57);
L_lambda_env_End57:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End57); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin57:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin57);
L_lambda_args_End57:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont57));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit57);
LlambdaCont57:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End58); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin58:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin58);
L_lambda_env_End58:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End58); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin58:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin58);
L_lambda_args_End58:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont58));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit58);
LlambdaCont58:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End59); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin59:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin59);
L_lambda_env_End59:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End59); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin59:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin59);
L_lambda_args_End59:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont59));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit59);
LlambdaCont59:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar b 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar b 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar c 0) ((bvar a 1 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar a 1 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(1))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 1 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar c 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar c 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure75);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit53);
LnotProcedure75:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit53:
//end expr: (applic (pvar c 0) ((bvar a 1 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure74);
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
LprocOverride22:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride22);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure74:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit59:

//end expr: (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit58:

//end expr: (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit57:

//end expr: (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure67);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit48);
LnotProcedure67:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit48:
//end expr: (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure52);
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
LprocOverride14:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride14);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure52:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit35:

//end expr: (lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar n 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar n 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure51);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit38);
LnotProcedure51:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit38:
//end expr: (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0))))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure46);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit34);
LnotProcedure46:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit34:
//end expr: (applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0))))))
//env-size: 1    params-size: 1
PUSH(IMM(2)); //new env size: 2
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End60); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin60:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin60);
L_lambda_env_End60:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End60); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin60:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin60);
L_lambda_args_End60:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont60));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit60);
LlambdaCont60:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (a) (lambda-simple (b) (pvar b 0)))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End61); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin61:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin61);
L_lambda_env_End61:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End61); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin61:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin61);
L_lambda_args_End61:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont61));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit61);
LlambdaCont61:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (pvar b 0))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End62); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin62:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin62);
L_lambda_env_End62:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End62); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin62:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin62);
L_lambda_args_End62:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont62));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit62);
LlambdaCont62:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar b 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar b 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit62:

//end expr: (lambda-simple (b) (pvar b 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit61:

//end expr: (lambda-simple (a) (lambda-simple (b) (pvar b 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure76);
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
LprocOverride23:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride23);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure76:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit60:

//end expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure45);
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
LprocOverride12:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride12);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure45:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit29:

//end expr: (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0)))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure39);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit29);
LnotProcedure39:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit29:
//end expr: (applic (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0)))))))))
//env-size: 0    params-size: 0
PUSH(IMM(1)); //new env size: 1
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End63); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin63:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin63);
L_lambda_env_End63:
// handling with params 
MOV(R4, IMM(0));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End63); 
PUSH(IMM(0));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin63:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin63);
L_lambda_args_End63:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont63));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit63);
LlambdaCont63:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0))))))))
//env-size: 1    params-size: 1
PUSH(IMM(2)); //new env size: 2
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End64); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin64:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin64);
L_lambda_env_End64:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End64); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin64:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin64);
L_lambda_args_End64:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont64));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit64);
LlambdaCont64:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0)))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar b 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar b 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0)))))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End65); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin65:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin65);
L_lambda_env_End65:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End65); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin65:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin65);
L_lambda_args_End65:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont65));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit65);
LlambdaCont65:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End66); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin66:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin66);
L_lambda_env_End66:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End66); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin66:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin66);
L_lambda_args_End66:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont66));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit66);
LlambdaCont66:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))))))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End67); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin67:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin67);
L_lambda_env_End67:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End67); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin67:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin67);
L_lambda_args_End67:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont67));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit67);
LlambdaCont67:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End68); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin68:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin68);
L_lambda_env_End68:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End68); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin68:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin68);
L_lambda_args_End68:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont68));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit68);
LlambdaCont68:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (pvar y 0))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End69); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin69:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin69);
L_lambda_env_End69:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End69); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin69:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin69);
L_lambda_args_End69:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont69));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit69);
LlambdaCont69:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar y 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar y 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit69:

//end expr: (lambda-simple (y) (pvar y 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit68:

//end expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End70); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin70:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin70);
L_lambda_env_End70:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End70); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin70:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin70);
L_lambda_args_End70:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont70));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit70);
LlambdaCont70:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (pvar y 0))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End71); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin71:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin71);
L_lambda_env_End71:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End71); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin71:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin71);
L_lambda_args_End71:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont71));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit71);
LlambdaCont71:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar y 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar y 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit71:

//end expr: (lambda-simple (y) (pvar y 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit70:

//end expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End72); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin72:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin72);
L_lambda_env_End72:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End72); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin72:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin72);
L_lambda_args_End72:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont72));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit72);
LlambdaCont72:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End73); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin73:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin73);
L_lambda_env_End73:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End73); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin73:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin73);
L_lambda_args_End73:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont73));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit73);
LlambdaCont73:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))
//env-size: 7    params-size: 1
PUSH(IMM(8)); //new env size: 8
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(7));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End74); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin74:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin74);
L_lambda_env_End74:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End74); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin74:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin74);
L_lambda_args_End74:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont74));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit74);
LlambdaCont74:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar b 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar b 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar c 0) ((bvar a 1 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar a 1 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(1))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 1 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar c 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar c 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure88);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit61);
LnotProcedure88:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit61:
//end expr: (applic (pvar c 0) ((bvar a 1 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure87);
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
LprocOverride27:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride27);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure87:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit74:

//end expr: (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit73:

//end expr: (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit72:

//end expr: (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure86);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit60);
LnotProcedure86:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit60:
//end expr: (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure85);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit59);
LnotProcedure85:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit59:
//end expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End75); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin75:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin75);
L_lambda_env_End75:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End75); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin75:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin75);
L_lambda_args_End75:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont75));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit75);
LlambdaCont75:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0))))))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End76); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin76:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin76);
L_lambda_env_End76:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End76); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin76:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin76);
L_lambda_args_End76:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont76));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit76);
LlambdaCont76:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))
//env-size: 7    params-size: 1
PUSH(IMM(8)); //new env size: 8
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(7));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End77); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin77:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin77);
L_lambda_env_End77:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End77); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin77:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin77);
L_lambda_args_End77:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont77));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit77);
LlambdaCont77:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (bvar a 0 0))
//env-size: 8    params-size: 1
PUSH(IMM(9)); //new env size: 9
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(8));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End78); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin78:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin78);
L_lambda_env_End78:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End78); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin78:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin78);
L_lambda_args_End78:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont78));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit78);
LlambdaCont78:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit78:

//end expr: (lambda-simple (b) (bvar a 0 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit77:

//end expr: (lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure92);
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
LprocOverride29:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride29);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure92:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit76:

//end expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure91);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit63);
LnotProcedure91:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit63:
//end expr: (applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0))))))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End79); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin79:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin79);
L_lambda_env_End79:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End79); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin79:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin79);
L_lambda_args_End79:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont79));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit79);
LlambdaCont79:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))
//env-size: 7    params-size: 1
PUSH(IMM(8)); //new env size: 8
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(7));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End80); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin80:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin80);
L_lambda_env_End80:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End80); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin80:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin80);
L_lambda_args_End80:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont80));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit80);
LlambdaCont80:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (bvar a 0 0))
//env-size: 8    params-size: 1
PUSH(IMM(9)); //new env size: 9
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(8));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End81); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin81:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin81);
L_lambda_env_End81:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End81); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin81:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin81);
L_lambda_args_End81:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont81));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit81);
LlambdaCont81:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit81:

//end expr: (lambda-simple (b) (bvar a 0 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit80:

//end expr: (lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure96);
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
LprocOverride30:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride30);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure96:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit79:

//end expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure95);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit66);
LnotProcedure95:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit66:
//end expr: (applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End82); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin82:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin82);
L_lambda_env_End82:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End82); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin82:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin82);
L_lambda_args_End82:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont82));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit82);
LlambdaCont82:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))
//env-size: 7    params-size: 1
PUSH(IMM(8)); //new env size: 8
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(7));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End83); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin83:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin83);
L_lambda_env_End83:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End83); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin83:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin83);
L_lambda_args_End83:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont83));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit83);
LlambdaCont83:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))
//env-size: 8    params-size: 1
PUSH(IMM(9)); //new env size: 9
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(8));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End84); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin84:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin84);
L_lambda_env_End84:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End84); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin84:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin84);
L_lambda_args_End84:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont84));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit84);
LlambdaCont84:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar z 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar z 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (bvar n 1 0) ((bvar s 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar s 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar s 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar n 1 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(1))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar n 1 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure99);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit68);
LnotProcedure99:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit68:
//end expr: (applic (bvar n 1 0) ((bvar s 0 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure98);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit67);
LnotProcedure98:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit67:
//end expr: (applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar s 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar s 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure97);
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
LprocOverride31:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride31);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure97:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit84:

//end expr: (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit83:

//end expr: (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit82:

//end expr: (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure94);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit65);
LnotProcedure94:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit65:
//end expr: (applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End85); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin85:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin85);
L_lambda_env_End85:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End85); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin85:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin85);
L_lambda_args_End85:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont85));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit85);
LlambdaCont85:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))
//env-size: 7    params-size: 1
PUSH(IMM(8)); //new env size: 8
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(7));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End86); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin86:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin86);
L_lambda_env_End86:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End86); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin86:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin86);
L_lambda_args_End86:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont86));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit86);
LlambdaCont86:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))
//env-size: 8    params-size: 1
PUSH(IMM(9)); //new env size: 9
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(8));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End87); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin87:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin87);
L_lambda_env_End87:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End87); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin87:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin87);
L_lambda_args_End87:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont87));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit87);
LlambdaCont87:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar b 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar b 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar c 0) ((bvar a 1 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar a 1 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(1))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 1 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar c 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar c 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure101);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit69);
LnotProcedure101:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit69:
//end expr: (applic (pvar c 0) ((bvar a 1 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure100);
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
LprocOverride32:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride32);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure100:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit87:

//end expr: (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit86:

//end expr: (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit85:

//end expr: (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure93);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit64);
LnotProcedure93:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit64:
//end expr: (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure90);
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
LprocOverride28:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride28);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure90:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit75:

//end expr: (lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar n 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar n 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure89);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit62);
LnotProcedure89:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit62:
//end expr: (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure84);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit58);
LnotProcedure84:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit58:
//end expr: (applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0))))))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End88); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin88:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin88);
L_lambda_env_End88:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End88); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin88:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin88);
L_lambda_args_End88:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont88));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit88);
LlambdaCont88:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (a) (lambda-simple (b) (pvar b 0)))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End89); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin89:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin89);
L_lambda_env_End89:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End89); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin89:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin89);
L_lambda_args_End89:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont89));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit89);
LlambdaCont89:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (pvar b 0))
//env-size: 7    params-size: 1
PUSH(IMM(8)); //new env size: 8
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(7));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End90); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin90:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin90);
L_lambda_env_End90:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End90); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin90:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin90);
L_lambda_args_End90:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont90));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit90);
LlambdaCont90:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar b 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar b 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit90:

//end expr: (lambda-simple (b) (pvar b 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit89:

//end expr: (lambda-simple (a) (lambda-simple (b) (pvar b 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure102);
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
LprocOverride33:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride33);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure102:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit88:

//end expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure83);
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
LprocOverride26:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride26);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure83:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit67:

//end expr: (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar b 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar b 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure82);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit57);
LnotProcedure82:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit57:
//end expr: (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure81);
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
LprocOverride25:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride25);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure81:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0)))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit66:

//end expr: (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit65:

//end expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0)))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure80);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit56);
LnotProcedure80:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit56:
//end expr: (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure79);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit55);
LnotProcedure79:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit55:
//end expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0))))))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End91); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin91:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin91);
L_lambda_env_End91:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End91); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin91:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin91);
L_lambda_args_End91:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont91));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit91);
LlambdaCont91:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End92); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin92:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin92);
L_lambda_env_End92:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End92); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin92:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin92);
L_lambda_args_End92:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont92));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit92);
LlambdaCont92:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (bvar x 0 0))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End93); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin93:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin93);
L_lambda_env_End93:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End93); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin93:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin93);
L_lambda_args_End93:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont93));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit93);
LlambdaCont93:
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
LlambdaExit93:

//end expr: (lambda-simple (y) (bvar x 0 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit92:

//end expr: (lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0))))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End94); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin94:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin94);
L_lambda_env_End94:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End94); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin94:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin94);
L_lambda_args_End94:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont94));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit94);
LlambdaCont94:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End95); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin95:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin95);
L_lambda_env_End95:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End95); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin95:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin95);
L_lambda_args_End95:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont95));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit95);
LlambdaCont95:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (pvar y 0))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End96); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin96:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin96);
L_lambda_env_End96:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End96); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin96:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin96);
L_lambda_args_End96:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont96));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit96);
LlambdaCont96:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar y 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar y 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit96:

//end expr: (lambda-simple (y) (pvar y 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit95:

//end expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit94:

//end expr: (lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar n 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar n 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure104);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit70);
LnotProcedure104:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit70:
//end expr: (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure103);
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
LprocOverride34:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride34);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure103:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit91:

//end expr: (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure78);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit54);
LnotProcedure78:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit54:
//end expr: (applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0)))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0)))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar b 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar b 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0)))))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End97); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin97:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin97);
L_lambda_env_End97:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End97); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin97:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin97);
L_lambda_args_End97:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont97));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit97);
LlambdaCont97:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End98); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin98:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin98);
L_lambda_env_End98:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End98); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin98:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin98);
L_lambda_args_End98:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont98));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit98);
LlambdaCont98:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))))))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End99); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin99:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin99);
L_lambda_env_End99:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End99); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin99:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin99);
L_lambda_args_End99:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont99));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit99);
LlambdaCont99:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End100); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin100:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin100);
L_lambda_env_End100:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End100); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin100:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin100);
L_lambda_args_End100:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont100));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit100);
LlambdaCont100:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (pvar y 0))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End101); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin101:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin101);
L_lambda_env_End101:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End101); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin101:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin101);
L_lambda_args_End101:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont101));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit101);
LlambdaCont101:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar y 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar y 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit101:

//end expr: (lambda-simple (y) (pvar y 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit100:

//end expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End102); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin102:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin102);
L_lambda_env_End102:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End102); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin102:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin102);
L_lambda_args_End102:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont102));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit102);
LlambdaCont102:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (pvar y 0))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End103); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin103:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin103);
L_lambda_env_End103:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End103); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin103:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin103);
L_lambda_args_End103:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont103));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit103);
LlambdaCont103:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar y 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar y 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit103:

//end expr: (lambda-simple (y) (pvar y 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit102:

//end expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End104); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin104:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin104);
L_lambda_env_End104:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End104); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin104:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin104);
L_lambda_args_End104:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont104));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit104);
LlambdaCont104:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End105); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin105:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin105);
L_lambda_env_End105:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End105); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin105:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin105);
L_lambda_args_End105:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont105));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit105);
LlambdaCont105:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))
//env-size: 7    params-size: 1
PUSH(IMM(8)); //new env size: 8
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(7));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End106); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin106:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin106);
L_lambda_env_End106:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End106); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin106:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin106);
L_lambda_args_End106:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont106));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit106);
LlambdaCont106:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar b 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar b 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar c 0) ((bvar a 1 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar a 1 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(1))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 1 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar c 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar c 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure116);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit79);
LnotProcedure116:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit79:
//end expr: (applic (pvar c 0) ((bvar a 1 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure115);
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
LprocOverride37:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride37);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure115:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit106:

//end expr: (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit105:

//end expr: (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit104:

//end expr: (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure114);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit78);
LnotProcedure114:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit78:
//end expr: (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure113);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit77);
LnotProcedure113:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit77:
//end expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End107); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin107:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin107);
L_lambda_env_End107:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End107); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin107:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin107);
L_lambda_args_End107:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont107));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit107);
LlambdaCont107:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0))))))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End108); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin108:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin108);
L_lambda_env_End108:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End108); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin108:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin108);
L_lambda_args_End108:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont108));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit108);
LlambdaCont108:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))
//env-size: 7    params-size: 1
PUSH(IMM(8)); //new env size: 8
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(7));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End109); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin109:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin109);
L_lambda_env_End109:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End109); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin109:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin109);
L_lambda_args_End109:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont109));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit109);
LlambdaCont109:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (bvar a 0 0))
//env-size: 8    params-size: 1
PUSH(IMM(9)); //new env size: 9
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(8));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End110); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin110:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin110);
L_lambda_env_End110:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End110); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin110:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin110);
L_lambda_args_End110:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont110));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit110);
LlambdaCont110:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit110:

//end expr: (lambda-simple (b) (bvar a 0 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit109:

//end expr: (lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure120);
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
LprocOverride39:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride39);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure120:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit108:

//end expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure119);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit81);
LnotProcedure119:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit81:
//end expr: (applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0))))))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End111); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin111:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin111);
L_lambda_env_End111:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End111); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin111:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin111);
L_lambda_args_End111:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont111));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit111);
LlambdaCont111:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))
//env-size: 7    params-size: 1
PUSH(IMM(8)); //new env size: 8
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(7));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End112); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin112:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin112);
L_lambda_env_End112:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End112); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin112:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin112);
L_lambda_args_End112:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont112));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit112);
LlambdaCont112:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (bvar a 0 0))
//env-size: 8    params-size: 1
PUSH(IMM(9)); //new env size: 9
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(8));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End113); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin113:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin113);
L_lambda_env_End113:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End113); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin113:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin113);
L_lambda_args_End113:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont113));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit113);
LlambdaCont113:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit113:

//end expr: (lambda-simple (b) (bvar a 0 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit112:

//end expr: (lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure124);
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
LprocOverride40:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride40);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure124:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit111:

//end expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure123);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit84);
LnotProcedure123:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit84:
//end expr: (applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End114); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin114:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin114);
L_lambda_env_End114:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End114); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin114:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin114);
L_lambda_args_End114:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont114));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit114);
LlambdaCont114:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))
//env-size: 7    params-size: 1
PUSH(IMM(8)); //new env size: 8
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(7));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End115); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin115:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin115);
L_lambda_env_End115:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End115); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin115:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin115);
L_lambda_args_End115:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont115));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit115);
LlambdaCont115:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))
//env-size: 8    params-size: 1
PUSH(IMM(9)); //new env size: 9
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(8));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End116); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin116:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin116);
L_lambda_env_End116:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End116); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin116:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin116);
L_lambda_args_End116:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont116));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit116);
LlambdaCont116:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar z 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar z 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (bvar n 1 0) ((bvar s 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar s 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar s 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar n 1 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(1))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar n 1 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure127);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit86);
LnotProcedure127:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit86:
//end expr: (applic (bvar n 1 0) ((bvar s 0 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure126);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit85);
LnotProcedure126:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit85:
//end expr: (applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar s 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar s 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure125);
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
LprocOverride41:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride41);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure125:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit116:

//end expr: (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit115:

//end expr: (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit114:

//end expr: (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure122);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit83);
LnotProcedure122:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit83:
//end expr: (applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End117); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin117:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin117);
L_lambda_env_End117:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End117); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin117:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin117);
L_lambda_args_End117:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont117));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit117);
LlambdaCont117:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))
//env-size: 7    params-size: 1
PUSH(IMM(8)); //new env size: 8
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(7));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End118); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin118:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin118);
L_lambda_env_End118:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End118); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin118:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin118);
L_lambda_args_End118:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont118));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit118);
LlambdaCont118:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))
//env-size: 8    params-size: 1
PUSH(IMM(9)); //new env size: 9
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(8));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End119); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin119:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin119);
L_lambda_env_End119:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End119); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin119:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin119);
L_lambda_args_End119:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont119));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit119);
LlambdaCont119:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar b 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar b 0 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar c 0) ((bvar a 1 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (bvar a 1 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(1))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 1 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar c 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar c 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure129);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit87);
LnotProcedure129:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit87:
//end expr: (applic (pvar c 0) ((bvar a 1 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure128);
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
LprocOverride42:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride42);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure128:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit119:

//end expr: (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit118:

//end expr: (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit117:

//end expr: (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure121);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit82);
LnotProcedure121:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit82:
//end expr: (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure118);
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
LprocOverride38:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride38);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure118:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit107:

//end expr: (lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar n 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar n 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure117);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit80);
LnotProcedure117:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit80:
//end expr: (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure112);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit76);
LnotProcedure112:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit76:
//end expr: (applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0))))))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End120); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin120:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin120);
L_lambda_env_End120:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End120); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin120:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin120);
L_lambda_args_End120:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont120));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit120);
LlambdaCont120:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (a) (lambda-simple (b) (pvar b 0)))
//env-size: 6    params-size: 1
PUSH(IMM(7)); //new env size: 7
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(6));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End121); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin121:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin121);
L_lambda_env_End121:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End121); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin121:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin121);
L_lambda_args_End121:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont121));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit121);
LlambdaCont121:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (pvar b 0))
//env-size: 7    params-size: 1
PUSH(IMM(8)); //new env size: 8
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(7));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End122); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin122:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin122);
L_lambda_env_End122:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End122); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin122:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin122);
L_lambda_args_End122:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont122));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit122);
LlambdaCont122:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar b 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar b 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit122:

//end expr: (lambda-simple (b) (pvar b 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit121:

//end expr: (lambda-simple (a) (lambda-simple (b) (pvar b 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar p 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar p 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure130);
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
LprocOverride43:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride43);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure130:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit120:

//end expr: (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure111);
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
LprocOverride36:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride36);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure111:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit99:

//end expr: (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar b 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar b 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure110);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit75);
LnotProcedure110:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit75:
//end expr: (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure109);
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
LprocOverride35:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride35);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure109:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0)))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit98:

//end expr: (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit97:

//end expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0)))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure108);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit74);
LnotProcedure108:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit74:
//end expr: (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure107);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit73);
LnotProcedure107:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit73:
//end expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0))))))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End123); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin123:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin123);
L_lambda_env_End123:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End123); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin123:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin123);
L_lambda_args_End123:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont123));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit123);
LlambdaCont123:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End124); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin124:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin124);
L_lambda_env_End124:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End124); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin124:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin124);
L_lambda_args_End124:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont124));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit124);
LlambdaCont124:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (bvar x 0 0))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End125); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin125:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin125);
L_lambda_env_End125:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End125); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin125:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin125);
L_lambda_args_End125:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont125));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit125);
LlambdaCont125:
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
LlambdaExit125:

//end expr: (lambda-simple (y) (bvar x 0 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit124:

//end expr: (lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0))))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0))))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End126); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin126:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin126);
L_lambda_env_End126:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End126); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin126:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin126);
L_lambda_args_End126:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont126));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit126);
LlambdaCont126:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End127); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin127:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin127);
L_lambda_env_End127:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End127); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin127:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin127);
L_lambda_args_End127:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont127));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit127);
LlambdaCont127:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (pvar y 0))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End128); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin128:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin128);
L_lambda_env_End128:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End128); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin128:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin128);
L_lambda_args_End128:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont128));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit128);
LlambdaCont128:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar y 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar y 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit128:

//end expr: (lambda-simple (y) (pvar y 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit127:

//end expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit126:

//end expr: (lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (pvar n 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar n 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure132);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit88);
LnotProcedure132:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit88:
//end expr: (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure131);
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
LprocOverride44:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride44);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure131:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit123:

//end expr: (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure106);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit72);
LnotProcedure106:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit72:
//end expr: (applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0)))))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))
//env-size: 2    params-size: 1
PUSH(IMM(3)); //new env size: 3
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(2));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End129); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin129:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin129);
L_lambda_env_End129:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End129); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin129:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin129);
L_lambda_args_End129:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont129));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit129);
LlambdaCont129:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))
//env-size: 3    params-size: 1
PUSH(IMM(4)); //new env size: 4
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(3));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End130); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin130:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin130);
L_lambda_env_End130:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End130); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin130:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin130);
L_lambda_args_End130:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont130));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit130);
LlambdaCont130:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
//env-size: 4    params-size: 1
PUSH(IMM(5)); //new env size: 5
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(4));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End131); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin131:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin131);
L_lambda_env_End131:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End131); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin131:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin131);
L_lambda_args_End131:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont131));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit131);
LlambdaCont131:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (lambda-simple (y) (pvar y 0))
//env-size: 5    params-size: 1
PUSH(IMM(6)); //new env size: 6
CALL(MALLOC);
DROP(1);
// R1 will hold new increased size env 
MOV(R1,R0);
MOV(R4, IMM(5));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_env_End132); 
MOV(R2, FPARG(0)); //env
MOV(R5, IMM(0));
MOV(R6, IMM(1));
L_lambda_env_Begin132:
	MOV(INDD(R1,R6), INDD(R2,R5));
	DECR(R4);
	INCR(R5);
	INCR(R6);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_env_Begin132);
L_lambda_env_End132:
// handling with params 
MOV(R4, IMM(1));
CMP(R4, IMM(0));
JUMP_EQ(L_lambda_args_End132); 
PUSH(IMM(1));
CALL(MALLOC);
DROP(1);
MOV(R3,R0);
MOV(R5, IMM(0));
L_lambda_args_Begin132:
	MOV(R6,R5);
	ADD(R6, IMM(2));
	MOV(INDD(R3,R5), FPARG(R6));
	DECR(R4);
	INCR(R5);
	CMP(R4, IMM(0));
	JUMP_NE(L_lambda_args_Begin132);
L_lambda_args_End132:
MOV(INDD(R1,0), R3); //now R1 holds the environment
// done handling with params 

// build the closure
PUSH(LABEL(LlambdaCont132));
PUSH(R1);
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
JUMP(LlambdaExit132);
LlambdaCont132:
PUSH(FP);
MOV(FP,SP);
//body code-gen
//begin expr: (pvar y 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar y 0)
//end body code-gen
POP(FP);
RETURN;
LlambdaExit132:

//end expr: (lambda-simple (y) (pvar y 0))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit131:

//end expr: (lambda-simple (x) (lambda-simple (y) (pvar y 0)))
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (applic (bvar a 0 0) ((pvar b 0)))
PUSH(IMM(SOB_NIL)); //MAGIC BOX
//begin expr: (pvar b 0)
MOV(R0, FPARG(2 + 0));
//end expr: (pvar b 0)
PUSH(R0);
PUSH(IMM(2)); //pushing args size to stack +1 for magic box
// done pushing args, now handling proc
//begin expr: (bvar a 0 0)
MOV(R0, FPARG(0));  //env
MOV(R0, INDD(R0, IMM(0))); //major
MOV(R0, INDD(R0, IMM(0))); //value
//end expr: (bvar a 0 0)
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure134);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit89);
LnotProcedure134:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit89:
//end expr: (applic (bvar a 0 0) ((pvar b 0)))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure133);
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
LprocOverride45:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride45);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure133:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit130:

//end expr: (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit129:

//end expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure105);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit71);
LnotProcedure105:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit71:
//end expr: (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0)))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure77);
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
LprocOverride24:
	MOV(R5, STARG(R4));
	MOV(FPARG(R3),R5); //overriding
	SUB(R2,1);
	SUB(R3,1); //next old param
	SUB(R4,1); //next new param
	CMP(R2, IMM(0));
	JUMP_NE(LprocOverride24);
//end overriding
//complete the override by dropping unnecessary items from stack
ADD(R6, IMM(4));
DROP(R6);
MOV(FP,R1); //Restore old FP in preparation of JUMP
JUMPA(INDD(R0,2));  //code
LnotProcedure77:
SHOW("Exception: attempt to apply non-procedure ", R0);
//end expr: (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0)))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit64:

//end expr: (lambda-simple (b) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0))))))))
//end body code-gen
POP(FP);
RETURN;
LlambdaExit63:

//end expr: (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0)))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure38);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit28);
LnotProcedure38:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit28:
//end expr: (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0))))))))) ((applic (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))))))))
CMP(INDD(R0,IMM(0)) , T_CLOSURE);
JUMP_NE(LnotProcedure3);
PUSH(INDD(R0,1));  // env
CALLA(INDD(R0,2));  //code
MOV(R1, STARG(0));
ADD(R1, IMM(2));
DROP (R1);
JUMP(LprocExit3);
LnotProcedure3:
SHOW("Exception: attempt to apply non-procedure ", R0);
LprocExit3:
//end expr: (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0))))))))) ((applic (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0)))))))))))))))))
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
//end expr: (applic (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0))))))))) ((applic (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))))))) ((const #t)))
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
//end expr: (applic (applic (applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((pvar b 0))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((bvar a 0 0))) ((pvar b 0))))))) ((applic (lambda-simple (n) (tc-applic (applic (pvar n 0) ((lambda-simple (x) (lambda-simple (x) (lambda-simple (y) (pvar y 0)))))) ((lambda-simple (x) (lambda-simple (y) (bvar x 0 0)))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0)))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0)))))))))))) ((bvar a 0 0))))) ((pvar b 0))) ((bvar a 0 0))))))))) ((applic (lambda-simple (n) (tc-applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((applic (applic (pvar n 0) ((lambda-simple (p) (tc-applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((applic (lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (bvar a 0 0)))))) ((pvar p 0))))) ((applic (lambda-simple (p) (tc-applic (pvar p 0) ((lambda-simple (a) (lambda-simple (b) (pvar b 0)))))) ((pvar p 0)))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (lambda-simple (c) (tc-applic (applic (pvar c 0) ((bvar a 1 0))) ((bvar b 0 0)))))) ((lambda-simple (x) (pvar x 0)))) ((lambda-simple (x) (pvar x 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (applic (lambda-simple (a) (lambda-simple (b) (tc-applic (applic (pvar b 0) ((applic (bvar a 0 0) ((lambda-simple (a) (lambda-simple (b) (tc-applic (applic (bvar a 0 0) ((lambda-simple (n) (lambda-simple (s) (lambda-simple (z) (tc-applic (bvar s 0 0) ((applic (applic (bvar n 1 0) ((bvar s 0 0))) ((pvar z 0)))))))))) ((pvar b 0))))))))) ((lambda-simple (x) (lambda-simple (y) (pvar y 0))))))) ((applic (lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))) ((lambda-simple (x) (lambda-simple (y) (tc-applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((applic (bvar x 0 0) ((pvar y 0))))))))))))))))) ((const #t))) ((const #f)))
SHOW("exit with ", R0);
STOP_MACHINE;
return 0;
}
