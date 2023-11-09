#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    for (int i = 0; i < 6; i++) {
        pid_t child_pid = fork();

        if (child_pid < 0) {
            perror("Fork failed");
            exit(1);
        }

        if (child_pid == 0) {
            printf("Child process %d executing code for the %d time.\n", getpid(), i + 1);
            exit(0);
        } else {
            int status;
            waitpid(child_pid, &status, 0);
	    printf("I am the parent process of the code\n");
        }
    }

    return 0;
}

