#include <stdio.h>
/**
 * main - entry point
 * @argc: integer prameter
 * @argv: char array
 * Return: integer
*/
int main(int argc, char const *argv[])
{
	if (argv[1] == '\0')
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum)
	return (0);
}
