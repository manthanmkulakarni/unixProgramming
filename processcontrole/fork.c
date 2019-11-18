#include<stdio.h>

int main(){
int pid=fork();
if(pid==0)
	printf("Parent process pid=%d\n",getpid());
else
	printf("Child process pid=%d\n",getpid());

return 0;
}
