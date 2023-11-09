#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char* argv[])
{
	printf(">> ");
	char *buffer = NULL;
	size_t n = 0;
	char b = ",";

	getline(&buffer, &n, stdin);
	printf("%s", buffer);

	
	char *strk1 = strtok(buffer, b);
       printf("%s", strk1);	













/**
	for(int i = 1; argv[i] != NULL; i++)
	{
		printf("%s\n", argv[i]);
	}
	pid_t my_pid;
	pid_t my_ppid;
	my_ppid = getppid();
	my_pid = getpid();
	printf("my pid = %u\n", my_pid);
	printf("my ppid = %u\n", my_ppid);
*/
	return 0;
}
