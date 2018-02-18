
/*venkatesh*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



main()
{
	char str[]="hai";

	int i,j=0;
	char rev[10];
	i=strlen(str);
	i=i-1;
	for(i;i>=0;i--,j++) 
		rev[j] = str[i];

	printf("..%s",rev);
}
