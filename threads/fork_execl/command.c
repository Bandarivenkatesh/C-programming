#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	char *cmdbuf = malloc(sizeof(char)*20);
	memset(cmdbuf,0,sizeof(cmdbuf)*20 );
	char *argv[4];
	puts("my shell >");
	gets(cmdbuf);
	argv[0]=cmdbuf;
	argv[1]=0;
	if(strcmp(cmdbuf,"vs")==0)
	{
	printf("my shell vv Venkat/vishali\n");
	}

	int id,stat;
	id = fork();
        if(id==0)
	{
		execvp(cmdbuf,argv);
		exit(5);
	}
	int pid = wait(&stat);

}


