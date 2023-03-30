#include "main.h"

/**
 * swap_int - swap two integers
 * @a: integer prametar as pointer
 * @b: integer prametar as pointer
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
