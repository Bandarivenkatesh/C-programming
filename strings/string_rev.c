#include<stdio.h>
#include <string.h>
#include <stdlib.h>

//char *rev;
char rev[100];

char *fun(char *str)
{
   int j, k;  
   //rev=(char *)malloc(strlen(str));   
   k=(strlen(str)-1);
   for(j = 0; j <=(strlen(str)-1);j++)
   {
      rev[j] = str[k];
      k--;
   }

return rev;
}

main()
{
  char *arr;
  char *p;
  gets(arr);
  p=fun(arr);
  printf(".......%s\n",p);
}

