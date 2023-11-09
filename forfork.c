#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <time.h>
#include <string.h>

int main(int argc, char* argv[])
{

	int id = fork();
	int n;
	if (id == 0)
	{
		n = 1;
	}
	else
	{
		n = 6;
	}

	if(id != 0)
	{
		int status;
		wait(&status);
	}
	for(int i = n; i < n + 5; i++)
	{
		printf("%d", i);
		fflush(stdout);
	}
	if (id != 0)
	{
	printf("\n");
	}

	return 0;
}
