#ifndef _EXCEPT_HANDLE_H_
#define _EXCEPT_HANDLE_H_

#include <setjmp.h>
#include "exception.h"
// Need mutex protect?
jmp_buf g_exceptionBuff;
#define TRY do { \
				switch(setjmp(g_exceptionBuff)) { \
				   case 0: while(1) {
#define THROW(e) longjmp(g_exceptionBuff, e)
#define CATCH(e) break; \
               case e:

#define FINALLY break; } \
               default: {

#define END_TRY  break; }   } \
				} while(0);

#endif