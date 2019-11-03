#include <stdio.h>
#include <errno.h> 
#include "exception_handler.h"

extern int divide(int, int);

int main(int argc, char** argv) {
   int ret = 0;
   
   TRY {
      ret = divide(10 , 0);
      printf("%d\n", ret);
   } CATCH(DIV_BY_ZERO) {
      printf("division by zero\n");
   } FINALLY {
      printf("Finally block\n");
   } END_TRY

   return 0;
}
