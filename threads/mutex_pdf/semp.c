#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>  /* Semaphore */


int count;
sem_t lock;

void *myThreadFun1(void *vargp)
{
        int i=0;


   sem_wait(&lock); 
	for(i;i<10;i++)
                    {
                    count++;
                    printf("count......1 = %d\n",count);
	sleep(1);
                    }

  sem_post(&lock); 
}

void *myThreadFun2(void *vargp)
{
     sem_wait(&lock); 
                    int i=0;
	for(i;i<10;i++)
                    {
                    count--;
                    printf("count......2 = %d\n",count); 
                    sleep(1);
                    }  
     sem_post(&lock); 

	
}



int main()
{

  sem_init(&lock, 0, 1);  

	pthread_t tid1,tid2;
	printf("Before Thread\n");
	pthread_create(&tid1, NULL, &myThreadFun1,NULL);
                    pthread_create(&tid2, NULL, &myThreadFun2, NULL);
	

        pthread_join(tid1, NULL);
        pthread_join(tid2, NULL);

	printf("After Thread\n");
  sem_destroy(&lock); /* destroy semaphore */

	exit(0);
}
