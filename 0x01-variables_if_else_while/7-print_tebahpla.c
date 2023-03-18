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
	int n = 122;

	do {
		putchar(n);
		n--;
	} while (n > 96);
		putchar('\n');
	return (0);
}
