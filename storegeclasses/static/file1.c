#include <stdio.h>
#include "file2.c"

fun2()
{
 static int x=0;
 int y=0;

 y=y+1;
 x=x+1;
 printf("Static x =%d\t",x);
 printf("Narmal  y =%d\n",y);
}


int z;
main()
{
int i=0,x=10,y=20;
z=x+y;
fun();

for(i;i<3;i++)
{
fun2();
}

}
