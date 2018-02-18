#include <stdio.h>

main()
{

 printf("process id %d\n",getpid());
 printf("Parent process id %d\n",getppid());
 fork();
 printf("I am Child Process id %d\n",getpid());
 sleep(4);



}
