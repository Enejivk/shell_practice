#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	char *buffer;
	ssize_t readline;
	size_t buffersize;

	(void)argc;
	(void)argv;

	printf("vshell $ ");
	readline = getline(&buffer, &buffersize, stdin);
	if (readline == -1)
	{
		perror("fail to getline");
		exit(1);
	}
	printf("%s", buffer);
	free(buffer);
	return 0;

}
