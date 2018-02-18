#include <stdio.h>
int i;

void fun()
{
 i++;
 printf("hai\n");
 if(i<=5)
 fun();
}

main()
{
 fun();
}
