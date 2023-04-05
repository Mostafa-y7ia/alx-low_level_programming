#include "main.h"

/**
 * _strcat - concat two strings
 * @dest: char prameter
 * @src: char prameter
 * Return: char
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while(dest[i])
		i++;

	for(; src[j]; j++)
		dest[i++] = src[j];

return (dest);
}
