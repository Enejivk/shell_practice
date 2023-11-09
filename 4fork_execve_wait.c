#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	pid_t id;

	for(int i = 0; i < 3; i++)
	{
		id = fork();
		if(id == -1)
		{
			perror ("fork call failed");
			exit(1);
		}

		if (id == 0)
		{
			printf("I am the child process take good care of me\n");
			exit (0);
		}
		else
		{
			int status;
			wait(&status);
			printf("i am the parent process\n");
		}
	}
	return 0;
}
