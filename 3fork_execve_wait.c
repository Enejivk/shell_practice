#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	pid_t re = fork();

	if (re == 0)
	{
		pid_t de = fork();
		if (de == 0)
		{
			fork();
		}
	}
	if (re != 0)
	{	int status;
		wait(&status);
	}
	printf("Hello world\n");
	return 0;
}
