#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L
#include<stdio.h>
#include<unistd.h>

int main()
{
#ifdef _POSIX_JOB_CONTROL
printf("system supports job control\n");
#else
printf("system does not support job control\n");
#endif

#ifdef _POSIX_SAVED_IDS
printf("system supports saved set-UID and set-GID\n");
#else
printf("system does not support set-uid and gid\n");
#endif

#ifdef _POSIX_CHOWN_RESTRICTED
printf("chown_restricted option is :%d \n",_POSIX_CHOWN_RESTRICTED);
#else
printf("system does not support %d\n" ,chown_restricted);
#endif

#ifdef _POSIX_NO_TRUNC
printf("pathname trunc option is: %d\n",_POSIX_NO_TRUNC);
#else
printf("system does not support system-wide pathname\n");
#endif

#ifdef _POSIX_VDISABLE
printf("disable char for terminal files is: %d\n",_POSIX_VDISABLE);
#else
printf(" system does not support _POSIX_VDISABLE\n");
#endif

return 0;
}
