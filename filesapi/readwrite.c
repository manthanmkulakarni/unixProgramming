#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>

int main(){

creat("test.txt",S_IRWXO|S_IRWXG|S_IRWXU);
int fd=open("test.txt",O_RDONLY|O_WRONLY),rc;
char buf[80],buff[2];
scanf("%s",buf);
write(fd,buf,sizeof(buf));
/*
while((rc=read(fd,buff,2))>0)
	printf("%s",buff);

*/
printf("%d",read(fd,buff,2));
return 0;
}
