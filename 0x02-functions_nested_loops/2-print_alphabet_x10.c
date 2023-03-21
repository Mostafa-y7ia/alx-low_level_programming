#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: A C program that prints alphabets 10 times with putchar
 *
 * Return: Alawys 0 (success)
*/

void print_alphabet_x10(void)
{
	int x;
	char i;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);

		_putchar('\n');
	}
}
