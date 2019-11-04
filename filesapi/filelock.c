#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>

int main(){

struct flock l;
int fd=open("test8.txt",O_RDONLY);
l.l_type=F_WRLCK;
l.l_whence=0;
l.l_start=10;
l.l_len=20;

fcntl(fd,F_SETLK,&l);
printf("Lock set for fd=%d\n",fd);
return 0;
}
