#include "main.h"

/**
 * rev_string - prints string
 * @s: char parameter as pointer
*/

void rev_string(char *s)
{
	int st = 0, nd, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	nd = i - 1;

	while (st < nd)
	{
		int tmp = s[st];
		s[st] = s[nd];
		s[nd] = s[st];
		st++;
		nd--;
	}
}
