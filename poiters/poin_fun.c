#include <stdio.h>

int fun(int x,int y)
{
   int z;
   z=x+y;
return z;
}

int *fun1(int x,int y)
{
   int z;
   z=x+y;
return &z;
}



main()
{
   int (*p)(int,int);
   p=fun;
   int x=10,y=20,z;
   z = (*p)(x,y);
   printf("%d\n",z);

   int *p1;
   p1=fun1(x,y);
   printf("%d\n",*p1);


}

