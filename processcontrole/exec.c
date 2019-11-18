#include "apue.h"
#include <sys/wait.h>


char *env_init[] = { "USER=unknown", "PATH=/tmp", NULL };
int main(void)
{
pid_t pid;

if ((pid = fork()) < 0) {
	printf("fork error");
} 

else if (pid == 0) {

	printf("Excle called\n");
	execle("ls", "ls", "myarg1","MY ARG2", (char *)0, env_init);
	

}

if ((pid = fork()) < 0) {
	printf("fork error");
} else if (pid == 0) { 
if (execlp("ls", "ls", "exec.c", (char *)0) < 0)
	printf("execlp error");
}
else{
printf("Exclp called\n");
}



return 0;
}


