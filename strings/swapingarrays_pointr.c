#include <stdio.h>

void swap05(int *x,int *y)
{
  int temp;
  temp = *x;
  *x   = *y;
  *y   = temp;
}

main()
{
 int arr[10];
 int i,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",arr+i);
 }
  
  swap05(arr+0,arr+5);
 
 for(i=0;i<n;i++)
 {
   printf("[%d]->",arr[i]);
 }

}
