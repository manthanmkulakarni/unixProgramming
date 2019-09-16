#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L
#include<stdio.h>
#include<unistd.h>

int main()
{
//sysconf
printf("Arg max is %d\n",sysconf(_SC_ARG_MAX));
printf("child max is %d\n",sysconf(_SC_CHILD_MAX));
printf("clock tick %d\n",sysconf(_SC_CLK_TCK));


//pathconf
printf("chown restict is %d\n",pathconf('/',_PC_CHOWN_RESTRICTED));
printf("link max is %d\n",pathconf('/',_PC_LINK_MAX));

//fpathconf
printf("Pip buffer is %d\n",fpathconf(0,_PC_PIPE_BUF));
printf("Max input is %d\n",fpathconf(0,_PC_MAX_INPUT));
printf("Name max is %d\n",fpathconf(0,_PC_NAME_MAX));

return 0;
}
