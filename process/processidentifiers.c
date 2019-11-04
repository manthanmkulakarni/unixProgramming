#include<stdio.h>
#include<unistd.h>

int main(){
printf("process ID of calling process %d\n",getpid());
printf("parent process ID of calling %d\n",getppid());
printf("real user ID of calling process %d\n",getuid());
printf("real group ID of calling process %d\n,",getgid());
printf("effective group ID of calling process %d\n",getegid());


return 0;
}
