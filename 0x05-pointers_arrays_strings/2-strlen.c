#include "main.h"

/**
 * _strlen - count the string lenth
 * @s: prameter as char
 * Return: integer value
*/

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
