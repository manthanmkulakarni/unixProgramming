#define _POSIX_SOURCE
#define _POSIC_C_SOURCE 199309L


#include<iostream>
#include<unistd.h>




using namepsace std;


int main(){

#ifdef _POSIX_VERSION
	cout<<_POSIX_VERSION<<endl;
#else
	cout<<"Posix version not supported\n";
#endif

return 0;
}
