#include "main.h"

/**
 * _puts - prints string
 * @str: char parameter as pointer
*/

void _puts(char *str)
{
	int n, i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (n = 0; n < i; n++)
		_putchar(str[n]);
	_putchar('\n');
}
