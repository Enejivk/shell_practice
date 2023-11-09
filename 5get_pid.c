#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
	printf("The names are all my friends are\n");
	int i = 1;

	while(argv[i] != NULL)
	{
	printf("%s\n", argv[i]);
	printf("%d\n", argc);
	i++;
	}

	pid_t my_pid, ppid;
	ppid = getppid();
	my_pid = getpid();
	printf("pid = %u, ppid = %u\n", my_pid, ppid);
	return 0;
}
