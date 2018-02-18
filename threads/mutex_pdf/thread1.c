#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


int count;
pthread_mutex_t lock;

void *myThreadFun1(void *vargp)
{
        int i=0;


  pthread_mutex_lock(&lock);

	for(i;i<10;i++)
                    {
                    count++;
                    printf("count......1 = %d\n",count);
	sleep(1);
                   }

 pthread_mutex_unlock(&lock);

}

void *myThreadFun2(void *vargp)
{
      pthread_mutex_lock(&lock);
                    int i=0;
	for(i;i<10;i++)
                    {
                    count--;
                    printf("count......2 = %d\n",count); 
                    sleep(1);
                    }  

   pthread_mutex_unlock(&lock);

	
}



int main()
{
	pthread_t tid1,tid2;
	printf("Before Thread\n");
	pthread_create(&tid1, NULL, &myThreadFun1,NULL);
                    pthread_create(&tid2, NULL, &myThreadFun2, NULL);
	

        pthread_join(tid1, NULL);
        pthread_join(tid2, NULL);

//        pthread_exit(NULL);
	printf("After Thread\n");
	exit(0);
}
