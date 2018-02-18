#include <stdio.h>

main()
{
   int arr[] = {10,20,30,40,50,60};


#if 0
   int p[0];
   p[0]=arr[0];
   
   arr[5] =arr[0];
   printf("%d\n",arr[5]);


   int *p;
   p=&arr[0];
   printf("%d\n",p[0]);
   int i;
   for(i=0;i<((sizeof(arr)/4)-1);i++)
{ 
   if(i!=((sizeof(arr)/4)-1)){
   arr[i] = arr[i+1];
   printf("[%d]->",arr[i]);}
}
printf("\n");
printf("%d\n",p[0]);
printf("\n");
#endif
}
