#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer
 * @str: The string to be copied.
 *
 * Return: char type
*/
char *_strdup(char *str)
{
	char *duplicate;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	duplicate = malloc(sizeof(char) * (l + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[l] = '\0';

	return (duplicate);
}
