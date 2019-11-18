#include "apue.h"
#include <sys/wait.h>
#include <stdlib.h>

int main(void)
{
pid_t pid;
if ((pid = fork()) < 0) {
printf("fork error");
} else if (pid == 0) {
/* child */
execl("./t","testinterp", "myarg1", "MY ARG2", (char *)0);

}

return 0;
}
