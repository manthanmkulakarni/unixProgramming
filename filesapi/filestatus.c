#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>


int main(){


struct stat filest;

stat("test2.txt",&filest);
printf("Size %d\n",filest.st_size); 
printf("Links %d\n",filest.st_nlink);
printf("Inode %d\n",filest.st_ino);

printf("%s",S_ISLNK(filest.st_mode)?"has symbolic link\n":"no symbolic link\n");

return 0;
}
