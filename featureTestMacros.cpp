/* show_test_macros.C*/
#define _POSIX_SOURCE
#define _POSIX_C_SOURCE199309L
#include<iostream>
using namespace std;


int main(){
#ifdef _POSIX_JOB_CONTROL
cout<<“system supports job control”;
#else
cout<<“ system does not support job control\n”;
#endif
#ifdef _POSIX_SAVED_IDS
cout<<“system supports saved set-UID and set-GID”;
#else
cout<<“ system does not support set-uid and gid\n”;
#endif
#ifdef _POSIX_CHOWN_RESTRICTED
cout<<“chown_restricted option is :”<<_POSIX_CHOWN_RESTRICTED<<endl;
#else
cout<<”system does not support”<<”chown_restricted option\n”;
#endif
#ifdef _POSIX_NO_TRUNC
cout<<”pathname truncoption is:”<< _POSIX_NO_TRUNC<<endl;
#else
cout<<” system does not support system-wide pathname”<<”truncoption\n”;
#endif
#ifdef _POSIX_VDISABLEcout<<“disable char. for terminal files is:”<<_POSIX_VDISABLE<<endl;
#else
cout<<“system does not support_POSIX_VDISABLE\n”;
#endif
return 0;
}
