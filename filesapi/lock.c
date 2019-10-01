#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>

int main(){

struct flock l;
int fd=open("fstatus.c",O_RDONLY);
l.l_type=F_RDLCK;
l.l_whence=0;
l.l_start=10;
l.l_len=10;

fcntl(fd,F_SETLK,&l);

return 0;
}
