#include "main.h"

/**
 * _strcat - concat two strings
 * @dest: char prameter
 * @src: char prameter
 * Return: char
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while(dest[i])
		i++;

	for(j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
