#include <stdio.h>

int main()
{
   int age;
   printf("%p\n", &age);

   age = 10;
  *(&age+1) = 20;
   printf("%d\n", *(&age));
   printf("%p\n", (&age+1));
   printf("%d\n", *(&age+1)); 
 
   return 0;
}
