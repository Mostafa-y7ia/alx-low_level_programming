#include "main.h"

/**
 * jack_bauer - prints every minute in 24 h
 * Return: always 0
*/
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 4; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar (a + 48);
					_putchar (b + 48);
					_putchar (':');
					_putchar (c + 48);
					_putchar (d + 48);
					_putchar ('\n');
				}
			}
		}
	}
}
