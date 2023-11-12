#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{
	char *buffer = NULL;
	ssize_t readline = 0;
	size_t buffersize;

	(void)argc;
	(void)argv;

	while(1)
	{
	printf("victor $ ");
	readline = getline(&buffer, &buffersize, stdin);
	if (readline == -1)
	{
		perror("fail to getline");
		exit(1);
	}
	printf("%s", buffer);
	free(buffer);
	}
	return 0;

}
