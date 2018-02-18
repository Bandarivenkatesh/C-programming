 #include<stdio.h>
int main(){

/*
   int (*ptr)[10];
    int a[10]={99,1,2,3,4,5,6,7,8,9};
    ptr=&a;
    printf("%d\n",(*ptr)[0]);



int *ptr[10];
int a[10]={100,1,2,3,4,5,6,7,8,9};

printf("\n%p  %p", ptr[0], a);

*ptr=a; 
printf("\n%p  %p", ptr[0], a); 

printf("\n%d\n",*ptr[1]);

*/
//https://www.quora.com/Is-there-a-difference-between-int-a-10-and-int-*a-10
        int *(p[10]);
        int (*q)[10];
        printf("%lu %lu\n", sizeof(int), sizeof(int *));
        printf("%lu %lu\n", sizeof(char), sizeof(char *));
        printf("%lu %lu\n", sizeof p, sizeof p[0]);
        printf("%lu %lu\n", sizeof q, sizeof *q);

    int (*d)[10];  /* A pointer to an array */
    int a[10];     /* The actual array */

    d = &a;  /* Make `d` point to `a` */

    /* Use the pointer dereference operator (unary prefix `*`)
       to access the actual array `d` points to */
    (*d)[0] = 7;
    (*d)[1] = 10;

    /* Double dereference is okay to access the first element of the
       arrat `d` points to */
    printf("%d\n", **d);








    return 0;
}
