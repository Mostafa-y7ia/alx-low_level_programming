#include "main.h"

/**
 * print_rev - prints string
 * @s: char parameter as pointer
*/

void print_rev(char *s)
{
	int n, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (n = i - 1; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
