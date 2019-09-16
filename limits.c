#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L
#include<stdio.h>
#include<unistd.h>
#include<limits.h>

int main()
{
#ifdef _POSIX_CHILD_MAX
printf("MAX CHILD IS %d\n",_POSIX_CHILD_MAX);
#else
printf("POSIX_CHILD_MAX not supported\n");
#endif

#ifdef _POSIX_OPEN_MAX
printf("OPEN MAX %d\n",_POSIX_OPEN_MAX);
#else
printf("OPEN MAX NOT SUPPORTED\n");
#endif

#ifdef _POSIX_LINK_MAX
printf("POSIX_LINK_MAX IS %d\n",_POSIX_LINK_MAX);
#else
printf("POSIX_LINK_MAX NOT SUPPORTED\n");
#endif

#ifdef _POSIX_IO_MAX
printf("POSIX_IO_MAX IS %d\n",_POSIX_IO_MAX);
#else
printf("POSIX_IO_MAX NOT SUPPORTED\n");
#endif

#ifdef _POSIX_ARG_MAX
printf("POSIX_ARG_MAX IS %d\n",_POSIX_ARG_MAX);
#else
printf("POSIX_ARG_MAX NOT SUPPORTED\n");
#endif



return 0;
}
