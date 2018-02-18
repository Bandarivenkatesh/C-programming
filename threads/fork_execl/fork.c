#include<stdio.h>
#include <wait.h>

main()
{
	int x=1,i=0;
	int ID=fork();
	if(ID==0)
	{
		x=x +5;
		printf("Child is excuted X =%d\n",x);
		for(i;i<4;i++){
			printf("i =%d\n",i);
			sleep(2);}
	}

	else
	{
		x=x -5;
		printf("Perent is excuted X =%d\n",x);
		int pid,stat;
		pid = wait(&stat);
		printf("child terminated with status %d\n",WEXITSTATUS(stat)); 
	}
      
}
