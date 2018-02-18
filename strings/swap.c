#include <stdio.h>
void swap(int *x,int *y)
{
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
}



main()
{

 int a=10;
 int b=20;
 swap(&a,&b);
 printf("a=%d\n",a);
 printf("b=%d\n",b);
 printf("a=%p...\n",&a);
 printf("a=%p...\n",&b);
}
