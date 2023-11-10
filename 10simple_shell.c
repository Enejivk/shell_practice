#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main(void)
{
	char *buffer = NULL;
	size_t n = 0;
	char *b = " \n";

	printf(" $");
	getline(&buffer, &n, stdin);

	char *strtok1 = strtok(buffer, b);
	printf("%s\n", strtok1);

	char *strtok2 = strtok(NULL, b);
	printf("%s\n", strtok2);

	char *argv[] = { strtok1,strtok2, NULL};

	execve("/bin/ls", argv, NULL);
	free(buffer);
	return 0;
}
