//Venkatesh

#include <stdio.h>
#include <string.h>

char *rev(char *str)
{

	static int i;
	i=strlen(str);
	i=i-1;
	int j=0; 
	static char rev1[100];
	for(i;i>=0;i--)
	{
		rev1[j] = *(str+i);
		j++;
	}

	return rev1;
}



main()
{
	char *str[10]="hai";
	//char *str="hai";
	char *p;
	p=rev(str); 
	printf("%s\n",p);
} 

