#include <stdio.h>

main()
{

  int a=10;
  int b=20;
  void *ptr;
  ptr=&a;
  ptr=&b;

  printf("a =%d\n",a);
  printf("b =%d\n",*(int *)ptr);
  //printf("b =%d\n",*ptr);          void pointer not dereferenced
  //ptr++;                           void pointer is not increamend
  printf("b =%d\n",sizeof(void));
}





