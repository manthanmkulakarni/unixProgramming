#include<stdio.h>

/* function prototyping*/

void add(int,int);

int main(){

add(10,20);
return 0;
}

void add(int a,int b){
	printf("Sum of %d and %d is %d\n",a,b,(a+b));

}
