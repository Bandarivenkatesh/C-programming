//Venkatesh
#include <stdio.h>
#include <stdlib.h>

main()
{

	int n=3;
	int *ptr=(int *)calloc(n,sizeof(int));  // this is creat the 3 integers  initialized to 0

	*ptr=10;
	*(ptr+1)=20;
	*(ptr+2)=30;

	printf(" *ptr =%d\n",*ptr);
	printf(" *ptr =%d\n",*(ptr+1));
	printf(" *ptr =%d\n",*(ptr+2));


	printf(" ptr[0] =%d\n",ptr[0]);
	printf(" ptr[1] =%d\n",ptr[1]);
	printf(" ptr[2] =%d\n",ptr[2]);

}
