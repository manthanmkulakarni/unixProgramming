#include "apue.h"

int main(void)
{
pid_t pid;

if ((pid = fork()) < 0) {
printf("fork error");
}
else if (pid == 0) {
printchar("output from child\n");
}
else {
wait();
printchar("output from parent\n");
}

return 0;
}


void printchar(char *str)
{
char *ptr;
int c;

setbuf(stdout, NULL);
/* set unbuffered */
for (ptr = str; (c = *ptr++) != 0; )
	putc(c, stdout);
}
