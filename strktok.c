#include <stdio.h>
#include <string.h>

int main(void)
{
	char cha[] = "this is the way";
	char d[] = " ";

	char *portion = strtok(cha, d);

	while(portion != NULL)
	{
		printf("%s\n", portion);
		portion = strtok(NULL, d);
	}

}
