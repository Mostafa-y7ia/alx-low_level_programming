#include "main.h"

/**
 * _strncat - concat array to an array by n letters
 * @dest: char prameter
 * @src: char prameter
 * @n: int prameter
 * Return: char
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (dest[j])
		j++;

	while (src[k])
		k++;

	if (n <= k)
		while (src[i] < src[n])
		{
			dest[j] = src[i];
			i++;
			j++;
		}

	else
		while (src[i])
		{
			dest[j] = src[i];
			i++;
			j++;
		}
	dest[j] = '\0';
	return (dest);
}
