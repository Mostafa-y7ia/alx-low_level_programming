#include "main.h"

/**
 * puts2 - prints scound chars
 * @str: char parameter as pointer
*/

void puts2(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
	{
		i++;
	}
	for (n = 0; n < i; n++)
	{
		if (n % 2 == 0)
			_putchar(str[n]);
	}
}
