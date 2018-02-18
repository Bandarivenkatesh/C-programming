// gcc -g leack.c
// valgrind --leak-check=yes ./a.out


#include <stdio.h>
#include <stdlib.h>

main()
{
   
   int *p;
   p=(int *)malloc(sizeof(int));   
  // free(p);

}


