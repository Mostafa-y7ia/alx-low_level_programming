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

	if (i % 2 == 0)
	{
		n = (i / 2);

		for (j = n; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		n = ((i - 1) / 2);

		for (j = n + 1; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
