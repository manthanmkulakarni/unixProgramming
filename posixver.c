#define _POSIX_SOURCE
#define _POSIC_C_SOURCE 199309L

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main(){

#ifdef _POSIX_VERSION
	printf("%ld",_POSIX_VERSION);
#else
	printf("Posix version not supported\n");
#endif

return 0;
}
