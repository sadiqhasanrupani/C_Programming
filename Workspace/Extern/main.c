#include <stdio.h>
#include "original.c"
extern int i;
int main()
{
   printf("value of the external integer is = %d\n", i);
   return 0 ;
}
