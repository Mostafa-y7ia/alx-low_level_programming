#include <stdio.h>

void print_alphabet(void);

/**
 * main - Entry point
 *
 * Description: A C program that prints alphabets
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
	print_alphabet();
	return (0);
}

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
		putchar(i);

	putchar('\n');
}
