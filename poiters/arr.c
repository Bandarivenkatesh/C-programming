#include <stdio.h>

main()
{

int arr[] = {10,20,30,40,50,60}; 

#ifdef arr1
 int temp1 =arr[0];
 int i=0;
 for(i=0;i<=((sizeof(arr)/4)-1);i++)
  {
  arr[i] = arr[i+1];
  if(i==5)
  arr[i]=temp1;
  printf("[%d]->",arr[i]);
  } 
 printf("\n");
 printf("\n");
#endif

#ifdef pointer
 int *temp;
 temp=arr;
 printf("%d\n",*temp);
  int i;
  for(i=0;i<=((sizeof(arr)/4)-1);i++)
  {
  *(arr+i) = *(arr+(i+1));
  if(i==5)
  *(arr+i)=*temp;
  printf("[%d]->",arr[i]);
  }
printf("\n");
printf("\n");
#endif
 
}

 
