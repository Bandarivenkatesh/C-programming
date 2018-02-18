#include <sys/types.h>
#include <sys/wait.h>
int main()
{
	pid_t chpid, child1, child2;
	int ii,stat;
	
	printf("I am a process my processs id is %d\n",getpid());
//	printf("I am creating two child processes & make them run some code\n");
	
	child1 = fork();
	if(child1)
	{
		printf("I am first child, my pid is %d\n", getpid());
		printf("I first child going to execute following loop for 6 times\n");
		for(ii=0;ii<6;ii++)
		{
			printf("I am child 1, this is iteration %d of loop\n",ii+1);
//			printf("I am tired, sleeping for 10 seconds\n");
			sleep(10);
		}
		exit(2);
	}
#if 0
	child2 = fork();
	if(child2)
	{
		printf("I am second child, my pid is %d\n", getpid());
//		printf("I second child going to execute following loop for 6 times\n");
		for(ii=0;ii<6;ii++)
		{
			printf("I am child 2, this is iteration %d of loop\n",ii+1);
//			printf("I am tired, sleeping for 5 seconds\n");
			sleep(5);
		}
		//exit(3);
		return 255;
	}
	printf("I am parent, my childeren are working & sleeping, i wait for them\n");
	chpid = wait(&stat);
	if(chpid == child1)
		printf("My first child terminated with status %d\n",WEXITSTATUS(stat));
	if(chpid == child2)
		printf("My second child terminated with status %d\n",WEXITSTATUS(stat));
#endif	

	chpid = wait(&stat);
	if(chpid == child1)
		printf("My first child terminated with status %d\n",WEXITSTATUS(stat));
//	if(chpid == child2)
//		printf("My second child terminated with status %d\n",WEXITSTATUS(stat));

	printf("Both children got terminated, now i will do the same\n");
}
	

