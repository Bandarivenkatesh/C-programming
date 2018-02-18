#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *myThreadFun1(void *vargp)
{
	sleep(10);
	printf("thread.....1 calling %d\n",vargp);   
	return NULL;
}

void *myThreadFun2(void *vargp)
{
	sleep(5);
	printf("thread.....2 calling \n");   
	return NULL;
}



int main()
{
	pthread_t tid1,tid2;
                    int x=10;
	printf("Before Thread\n");
	pthread_create(&tid1, NULL, myThreadFun1,NULL);
                    pthread_create(&tid2, NULL, myThreadFun2, NULL);
	/* Telling the main thread to wait for the task completion of all its spawned threads.*/

        pthread_join(tid1, NULL);
        pthread_join(tid2, NULL);

//        pthread_exit(NULL);
	printf("After Thread\n");
	exit(0);
}
