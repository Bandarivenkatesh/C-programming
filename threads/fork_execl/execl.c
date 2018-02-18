#include <stdio.h>

main()
{


#ifdef L
	execl("/bin/ls","ls",0);
#endif

#ifdef V
	char *args[3];
	args[0]="ls";	
	args[1]="-l";
	args[2]=0;
	execv("/bin/ls",args);
#endif

#ifdef P
	execl("/bin/ps","ls",0);
#endif

#ifdef VP
	char *arr[2];
	arr[0]="ls";
	arr[1]=0;
	execvp("ls",arr);
#endif
}
