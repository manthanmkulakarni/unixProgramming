#include<stdio.h>

void add(int,int);
void (*fptr)(int,int)=add;

int main(){

fptr(10,20);

return 0;
}

void add(int a,int b){
printf("The sum of %d and %d is %d\n",a,b,a+b);

}
