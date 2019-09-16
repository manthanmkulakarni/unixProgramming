#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
char mystring[10];
scanf("%s",mystring);
printf("%d",setlocale(LC_TIME,mystring));
return 0;
}
