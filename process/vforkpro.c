#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<error.h>

int glob = 6;
int main(){

int var;
pid_t pid=0;

var = 88;
printf("before vfork\n");

printf("pid = %d\tglob = %d, var = %d before calling child\n", pid, glob, var);


if ((pid = vfork()) < 0) {
printf("vfork error");
}

else if (pid == 0) {
/* child */
glob++;
/* modify parent's variables */
var++;

printf("pid = %d\tglob = %d, var = %d before child exits\n", pid, glob, var);


_exit(0);

/* child terminates */
}

printf("pid = %d\nglob = %d, var = %d after child exits\n", pid, glob, var);

return 0;

}
