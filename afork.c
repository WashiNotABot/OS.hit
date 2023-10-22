#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    int pid;
    /* create another process */
    pid = fork();
    if (pid < 0) { /* error occurred */
        fprintf(stderr, "Fork Failed\n");
        exit(1);
    }
    else if (pid == 0) { /* child process */
        printf("I'm the child with PID %d and PPID %d about to call ps using execlp after 3 sec\n", getpid(), getppid());
        sleep(3);
        execlp("ps","ps", NULL);
    }
    else { /* parent process waits for */
    /* the child to complete */
        printf("Parent: PID %d and PPID %d, and waiting my child process to terminate.\n", getpid(), getppid());
        wait(NULL);
        printf("Parent: I see my child completed.\n");
        exit(0);
 }
}