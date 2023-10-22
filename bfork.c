#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define max 20
#define proctime 30

int main() {
    for (int i = 0; i < max; i++) {
        int pid = fork();
        if (pid < 0) {
            fprintf(stderr, "Fork Failed\n");
            exit(1);
        } else if (pid == 0) {
            printf("Child(%d) PID %d PPID %d, about to terminate in %d sec.\n", i, getpid(), getppid(), proctime);
            sleep(proctime);
            exit(0);
        }
        sleep(1);
    }

    for (int i = 0; i < max; i++) {
        int status;
        int child_PID = wait(&status);
        printf("Parent: I see my child #%d completed.\n",i);
    }

    return 0;
}
