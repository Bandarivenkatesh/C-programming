
//Venkatesh
#include <stdio.h>

struct link
{
	int z;
	int j;
};

struct link i;

struct link *fun1(int x,int y)
{
	i.z=x+y;
	i.j=i.z-y;
	i.z=i.z-i.j;
	return &i;
}

main()
{
	int *p;
	int x=10,y=20;
	struct link *p1;
	struct link *(*fun)(int,int); 
	fun=fun1;
	p1= *(*fun)(x,y);
	printf("x=%d\n",p1->z);
	printf("y=%d\n",p1->j);
}
