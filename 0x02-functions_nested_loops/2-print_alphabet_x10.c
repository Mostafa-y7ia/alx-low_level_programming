#include <stdio.h>

void print_alphabet_x10(void);

/**
 * main - Entry point
 *
 * Description: A C program that prints alphabets
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: A C program that prints alphabets 10 times with putchar
 *
 * Return: Alawys 0 (success)
*/

void print_alphabet_x10(void)
{
	for (int x = 0; x < 10; x++)
	{
		for (int i = 97; i <= 122; i++)
			putchar(i);

		putchar('\n');
	}
}
