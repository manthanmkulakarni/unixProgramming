#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>

int main( )
{
int pid=fork( );

if(pid==0)
	printf("child process called %d\n",pid);
else
	printf("parent process called %d\n",pid);

return 0;
}
