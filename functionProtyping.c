#include<stdio.h>

/* function prototyping*/

void addnumber(int,int);

int main(){

addnumber(10,20);
return 0;
}

void addnumber(int a,int b){
	printf("Sum of %d and %d is %d\n",a,b,(a+b));

}
