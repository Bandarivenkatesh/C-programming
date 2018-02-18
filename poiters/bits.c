#include <stdio.h>

main()
{
  int i,bit=0;
  scanf("%d",&i);
  bit = (i&(1<<bit));
  if(bit)
  printf("odd\n");
  else
  printf("even\n");

}

