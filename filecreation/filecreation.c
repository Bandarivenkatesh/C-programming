#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <error.h>

int main(void)
{
	int errno=0;
	int fd,count1,count2;
	char wrbuff[]="hai this is demo for file creation";
	char rdbuff[100];
//	char file_name[] = "/home/v/Desktop/filecreation/file.txt";  
	creat("/home/v/Desktop/filecreation/file.txt",0666);
	fd = open("/home/v/Desktop/filecreation/file.txt",O_RDWR);
	if(fd == -1){
		printf("file is not open it geting error\n");
		printf("open is error retry the openfile %s\n",strerror(errno));}
	count1 = write(fd,wrbuff,strlen(wrbuff));
	if(count1 == -1)
		printf("write faild\n");
	lseek(fd,0,SEEK_SET);
	count2 = read(fd,rdbuff,100);
	rdbuff[count2] = '\0';
	if(count2 == -1)
		printf("read faild\n");
	printf("%s\n",rdbuff);
	ftruncate(fd,0);
	memset(wrbuff,'0',100);
	close(fd);
	return 0;
}
