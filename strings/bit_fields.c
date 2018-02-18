#include<stdio.h>
main()
{
struct s {

#ifdef narmal 
int a;ss
char b;
int c;

#endif
#ifdef bitfild
//unsigned int  a:4;
unsigned int  a:2;
char f:8;
int  c:26;
//int  b:3;
#endif

};
struct s s1;
s1.a=4;
s1.f='A';
printf("%c\n",s1.f);
printf("%d\n",s1.a);
printf("%d\n",sizeof(s1));
}

