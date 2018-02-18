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

for(i=0;i<n;i++)
  printf(" The int array[%d] is =%d\n",i,A[i]);




}

