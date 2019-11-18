#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h> 

int  main()
  {
     pid_t pid;
     char *const envp[2] = {"STEPLIB=SASC.V6.LINKLIB", NULL};

     if ((pid = fork()) == -1)
        perror("fork error");
     else if (pid == 0) {
        execle("EXEC.c", "./EXEC", NULL, envp);
        printf("Return not expected. Must be an execle() error.n");
     }
  }

