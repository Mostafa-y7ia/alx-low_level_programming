#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array elemnts
 * @a: int prameter as pointer
 * @n: int prameter
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);
	putchar('\n');
}
