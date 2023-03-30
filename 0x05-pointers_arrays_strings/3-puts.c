#include "main.h"

/***/

void _puts(char *str)
{
	int n, i = 0;

	i = _strlen(str);
	for(n = 0; n<i; n++)
		_putchar(str[n]);
	_putchar('\n');
}
