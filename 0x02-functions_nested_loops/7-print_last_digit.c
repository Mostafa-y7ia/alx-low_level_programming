#include "main.h"

/**
 * _abs - return abslute value
 * @n: integer to be tested
 * Return: integer
*/

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
/**
 * print_last_digit - pritns the last digit of a number
 * @n: integer whose last digit is to be printed
 * Return: lastdigit of n
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = _abs((n % 10));
	_putchar(lastDigit + 48);
	return (lastDigit);
}
