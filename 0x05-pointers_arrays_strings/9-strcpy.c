#include "main.h"

/**
 * _strcpy - copies the array
 * @dest: char prameter as pointer
 * @src: char prameter as pointer
 * Return: char array
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		src[i] = dest[i];
	} while (src[i] != '\0');

	return (dest);
}
