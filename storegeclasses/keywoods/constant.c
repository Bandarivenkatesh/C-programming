#include <stdio.h>

void main()
{
	int x=10;
	int y=20;

	const int *ptr=&x;
	ptr=&y;
	printf("x...=%d\n",*ptr);

	int *const ptr1=&x;
	*ptr1=30;
	printf("x...=%d\n",*ptr1);

	const int *const ptr2=&x;
                    ptr2=&y;
	//*ptr2=30;
	printf("x...=%d\n",*ptr2);

}


