#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<string.h>
#include<unistd.h>

int main(){
//printf("Ecode-->Status\n");
printf("%d --> %s\n%d --> %s\n%d --> %s\n",EIO,strerror(EIO),EPERM,strerror(EPERM),EINTR,strerror(EINTR));
printf("%d --> %s\n%d --> %s\n",EBADF,strerror(EBADF),EACCES,strerror(EACCES));
printf("%d --> %s\n",EBUSY,strerror(EBUSY));
return 0;


}
