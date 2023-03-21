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
