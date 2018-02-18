#include <stdio.h>

main()
{
  int i=0x1234567;
  char *p;
  p=(char*)&i;
  
  int j=0;
  for(j;j<sizeof(i);j++)
  printf("start[%d]= %.2x\n",j, p[j]);
  
}
