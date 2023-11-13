#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *buffer = NULL;
	size_t buffersize = 0;
	ssize_t readline;

	(void)argc;
	(void)argv;
	while (1)
	{
	printf("$ ");
	readline = getline(&buffer, &buffersize, stdin);
	printf("%s", buffer);
	if (readline == -1)
	{
		perror("fail to getline");
		exit(1);
	}
	}
	free(buffer);
	return (0);
	}