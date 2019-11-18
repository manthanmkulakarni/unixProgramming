#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
char str[100];
printf("Enter the command\n");
scanf("%s",str);
system(str);

return 0;
}
