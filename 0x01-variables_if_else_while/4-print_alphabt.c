#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
	int n = 97;

	do {
	if (n != 101 && n != 113)
	{
		putchar(n);
		n++;
	}
	} while (n < 123);
		putchar('\n');
	return (0);
}
