#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i, result;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
		i = 0;

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

	return (0);
}
