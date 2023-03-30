#include "main.h"

/**
 * rev_string - prints string
 * @s: char parameter as pointer
*/

void rev_string(char *s)
{
	int st = 0, tmp, nd, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	nd = i - 1;

	while (st < nd)
	{
		tmp = s[st];
		s[st] = s[nd];
		s[nd] = tmp;
		st++;
		nd--;
	}
}
