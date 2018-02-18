#include <stdio.h>
#include <string.h>

#ifdef revese
char *swap(char *arr1)
{
   int i; 
  static char rev[100];
  i= (strlen(arr1)-1); 
   int j=0;
   for(j=0;j<=strlen(arr1);j++)
   {
     rev[j]=arr1[i];
     i--;
   }
 return rev;
}


main()
{
//s char *arr;//="hai";
 char arr[] = "hai";
 char *p;
 //gets(arr);
 p=swap(arr);
 printf("....%s\n",p);
}
#endif




