 #include <stdio.h>
main()
{
        int *(p[10]);
        int (*q)[10];
        int *z[10];
        int a[10];
        printf("%ld\n %ld\n %ld\n %d\n", sizeof(p), sizeof(q),sizeof(z),sizeof(a));

}
