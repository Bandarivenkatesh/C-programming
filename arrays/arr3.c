//Venkatesh
#include<stdio.h>
#include <stdlib.h>

int main()
{
	int i=5,j=10,i1=5,j1=10;;
	int *p=&i,*q=&j;
	int c;
	c = *p-*q;
	printf("%d\n",c);

	int *ptr,*ptr1;

	ptr=(int *)malloc(sizeof(int));
	*ptr=20;
	*(ptr+1) = 30;
	printf("%d\n",*ptr);
	printf("%d\n",*(ptr+1));

	int z=2;
	printf("%d\n",*(&z));
}

