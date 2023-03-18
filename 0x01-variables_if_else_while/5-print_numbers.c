#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints numbers from 0 to 10
 *
 * Return: Alawys 0 (success)
 *
*/

int main(void)
{
	int n = 0;

	do {
		printf("%d", n);
		n++;
	} while (n < 10);
		printf("\n");
	return (0);
}
