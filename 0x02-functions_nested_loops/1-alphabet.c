#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: A C program that prints alphabets with putchar
 *
 * Return: Alawys 0 (success)
*/

void print_alphabet(void)
{
	for (int i = 97; i <= 122; i++)
		_putchar(i);

	_putchar('\n');
}
