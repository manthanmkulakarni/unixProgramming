#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,NULL);
printf("File is %s\nDate %s\nTime %s\nLine %d\n",__FILE__,__DATE__,__TIME__,__LINE__);
return 0;
}
