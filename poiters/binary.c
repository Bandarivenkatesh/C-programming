#include <stdio.h>
void getbinary(int x)
{
   int bit;
  for(bit=8;bit>=0;bit--)
{
  if((1<<bit)&x)
  printf("1");
  else
  printf("0");
}
 printf("\n");
}


main()
{
 int i=4;
 getbinary(i);
}
