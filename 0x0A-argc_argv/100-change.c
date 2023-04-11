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
	int i = atoi(argv[1]), result;

	if (i < 0)
	{
		i = 0;
	}
	if (argc == 2)
	{
		result = i / 25;
		i = i % 25;
		result += i / 10;
		i = i % 10;
		result += i / 5;
		i = i % 5;
		result += i / 2;
		i = i % 2;
		result += i;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
