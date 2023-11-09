#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	pid_t my_pid;
	pid_t childpid;
	my_pid = getpid();
	childpid = fork();

	if(childpid == -1)
	{
		perror("error: ");
		return 0;
	}
	
	printf("my pid is %u\n", my_pid);
	

	if(childpid == 0)
	{
		printf("%u No i'm a child process\n", childpid);
	}
	else
	{
		printf("(%u) %u, I am your father\n", my_pid, childpid);
	}
	return 0;
}
