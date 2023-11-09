#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	printf("$ ");
	char* buffer = NULL;
	size_t n = 0;
	char* b = " ";
	
	int result = getline(&buffer, &n, stdin);
	char *strtok1 = strtok(buffer, b);
	printf("%s\n", strtok1);

	char *strtok2 = strtok(NULL, b);
	printf("%s\n", strtok2);

	char *strtok3 = strtok(NULL, b);
	printf("%s\n", strtok3);

	//printf("%s\n %d\n", buffer, result);
	free(buffer);
	return 0;
}
