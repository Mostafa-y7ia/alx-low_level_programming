#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that assign a random number to the variable
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		puts("is positive\n");
	if (n == 0)
		puts("is zero\n");
	if (n < 0)
		puts("is negative\n");
	return (0);
}
