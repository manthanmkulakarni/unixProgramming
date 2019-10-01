#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>

int main(){

char path1[100],path2[100];

scanf("%s",path1);
scanf("%s",path2);

if(link(path1,path2)==-1)
	printf("Error in linking\n");
return 0;
}
