#include<stdio.h>
#include <stdlib.h> 
int main()
{
int i;


char *arr[4] = {"C","C++","Java","VBA"};
   char *(*p)[4];
   p=&arr;
   printf("%s\n",*p[0]);

int  arr1[] ={10,20,30,40,50,60};
   char *p1;
   p1=arr1;
   printf("%d\n",p1[0]);

 int a=20;
 int *n=(int *)malloc(sizeof(int));
 n=&a;
 printf("%d\n",*n);



return 0;
}
