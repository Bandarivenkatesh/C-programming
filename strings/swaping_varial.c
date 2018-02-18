#include <stdio.h>

struct Swap
{
 int x;
 int y;
};

struct Swap swap(int x,int y)
{
   
   struct Swap swap1;
   swap1.x=x+y;
   swap1.y=swap1.x-y;
   swap1.x=swap1.x-swap1.y;
   //printf(" x =%d ,y=%d\n",swap1.x,swap1.y);

return swap1;
}


main(){

struct Swap z;
   int x,y;
   scanf("%d%d", &x,&y);
   z=swap(x,y);
   printf(" x =%d ,y=%d\n",z.x,z.y);
}   








