#include<stdio.h>
main()
{
  char s[]="hai";
  int i;
  i=*(&s+1)-s;
  printf("s size is =%d\n",i);

 int j[10];
 i=(char *)(&j+1)-(char *)(&j);
 printf("j size is =%d\n",i);

 
}
