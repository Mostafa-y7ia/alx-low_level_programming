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
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
