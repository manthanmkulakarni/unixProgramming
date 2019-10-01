#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>

int main(){


int fd=open("test.txt",O_RDONLY|O_WRONLY),accflg,exitflg;
printf("Close on exit flag %d\n",exitflg=fcntl(fd,F_GETFD));
printf("Acces controle flag %d\n",accflg=fcntl(fd,F_GETFL));
fcntl(fd,F_SETFL,accflg|O_APPEND|O_EXCL);
fcntl(fd,F_SETFD,exitflg|1);

printf("Close on exit flag %d\n",fcntl(fd,F_GETFD));
printf("Acces controle flag %d\n",accflg=fcntl(fd,F_GETFL));
return 0;
}
