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
		puts("%d is positive\n", n);
	if (n == 0)
		puts("%d is zero\n", n);
	if (n < 0)
		puts("%d is negative\n", n);
	return (0);
}
