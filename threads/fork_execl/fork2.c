#include<stdio.h>

int main()
{

	int pid = fork();
     
	if (pid == 0){
		printf("child proces\n");}
	else
		printf("parentd process \n");

	return 0;
}
