#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char **argv)
{
	struct stat st;
	int i;

	if(argc < 2)
	{
		printf("The name of the file is %s\n", argv[0]);
	}
	else
	i = 1;
	{
		while (argv[i] != NULL)
		{
			printf("%s", argv[i]);
			int rtv = stat(argv[i], &st);

			if(rtv == 0)
			{
				printf("FOUND\n");
			}
			else
			{
				printf("NOT FOUND\n ");
			}
			i++;
		}
	}
	return 0;
}
