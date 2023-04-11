#include <stdio.h>
/**
 * main - entry point
 * @argc: integer prameter
 * @argv: char array
 * Return: integer
*/
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
