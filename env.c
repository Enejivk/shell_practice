#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv, char **env)
{
	int i = 0;
	while(argv != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
return (0);
}
