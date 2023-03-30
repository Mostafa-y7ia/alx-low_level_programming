#include "main.h"

/**
 * puts_half - prints the second half of string
 * @str: char prameter as pointer
*/

void puts_half(char *str)
{
	int i = 0, n, j;

	while (str[i] != '\0')
	{
		i++;
	}

	if (n % 2 == 0)
		n = i / 2;
	else
		n = (i - 1) / 2;

	for (j = n; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
