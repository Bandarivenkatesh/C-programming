//Venkatesh
#include <stdio.h>
#include <stdlib.h>

main()
{

	int n;
	printf("Enter the array of size\n");
	scanf("%d",&n);
	//  int A[n];

	int *A=(int *)malloc(sizeof(int)*n);  // this is creat the 3 integers 

	int i; 
	for(i=0;i<n;i++)
		A[i]=i+1;


	int *B=(int *)realloc(A,sizeof(int)*n*2);  // this is creat the 3 integers 

	for(i=0;i<2*n;i++)
		printf(" The int array[%d] is =%d\n",i,B[i]);

}

