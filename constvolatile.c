#include<stdio.h>

void print1(const char a){
//After modification
//a=a+1;
printf("The constant char is %c\n",a);

}
void print2(volatile char a){

printf("The volatile char  is %c\n",a);

}
int main(){
char a;
scanf("%c",&a);
print1(a);
print2(a);

return 0;
}
