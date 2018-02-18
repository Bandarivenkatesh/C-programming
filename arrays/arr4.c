//Venkatesh

#include <stdio.h>

char *reverse(char str[])
{

	static int i=0;
	int len;
	len=strlen(str);
	static  char rev[100];
	if(*str)
	{
		reverse(str+1);
		rev[i++] = *str;
	}

	return rev;

}

main()
{    
	char str[] = "hai";
	char *p;
	p=reverse(str);
	printf("%s\n",p);
}
