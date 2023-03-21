#include "main.h"
/**
 * _isalpha - return 1 if c is alphabet, 0 otherwise
 * @c: integer to be tested
 * Return: 1, 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
