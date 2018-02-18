//Venkatesh

#include <stdio.h>

main()
{
	char *name[3] = {"Adam","chris","Deniel"};
	char **p;
	p=name;
	printf("%s\n",p[0]);

	char name1[3][6] = {"Adam","chris","Deniel"};
	printf("%c\n",name1[1][0]);

}
