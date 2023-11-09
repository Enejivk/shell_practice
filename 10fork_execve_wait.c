#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>


int main(void)
{
	pid_t id;
	int status;
	int i, retv;

	for(i = 0; i < 3; i++)
	{
	id = fork();

	if (id == -1)
	{
		perror("fork failed");
			exit(1);
	}
	if(id == 0)
	{
		char *argv[] = {"ls", "-l", "/tmp", NULL};
		retv = execve("/bin/ls", argv, NULL);
		if(retv == -1)
		{
			perror("execve failed");
			exit(1);
		}
		exit(0);

	}
	else
	{
		wait(&status);
	}
	}
	return 0;
}
