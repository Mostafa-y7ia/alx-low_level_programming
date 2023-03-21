#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - returns the last digit
 * @n: integer to be tested
 * Return: integer
*/
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	printf("%d", x);
	return (x);
}
