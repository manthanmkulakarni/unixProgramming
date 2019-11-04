#include<unistd.h>
#include<sys/types.h>
#include<string.h>
int main(int argc, char *argv[])
{
char *buf [256], tname [256];
if (argc ==4)
return symlink(argv[2], argv[3]); /* create a symbolic link */
else
return link(argv[1], argv[2]); /* creates a hard link */
}
