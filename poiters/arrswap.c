#include <stdio.h>
void swap(int *arr1)
{
  int tem = *(arr1+0);
  *(arr1+0) = *(arr1+1);
  *(arr1+1) = tem;
}
  




main()
{
  int arr[] = {20,25};
  printf("arr[0]=%d\n,arr[1]=%d\n",arr[0],arr[1]);
  swap(arr);
  printf("arr[0]=%d\n,arr[1]=%d\n",arr[0],arr[1]); 
}
