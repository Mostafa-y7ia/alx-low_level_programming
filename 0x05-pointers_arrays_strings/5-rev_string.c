#include "main.h"

/**
 * rev_string - prints string
 * @s: char parameter as pointer
*/

void rev_string(char *s)
{
	int n, i = 0, j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	char arr[i];

	for (n = i - 1; n >= 0; n--)
	{
		arr[j] = s[n];
		j++;
	}

	for (k = 0; k < i; k++)
		s[i] = arr[i];

}
