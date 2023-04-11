#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: integer prameter
 * @argv: char array
 * Return: integer
*/
int main(int argc, char const *argv[])
{
	int s = 0;
	char *p;

	while (--argc)
	{
		for (p = argv[argc]; *p; p++)
		{
			if (*p < '0' || *p > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
		printf("%d\n", sum);
	return (0);
}
