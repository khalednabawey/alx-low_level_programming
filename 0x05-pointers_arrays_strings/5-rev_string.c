#include "main.h"

/**
 * rev_string -> function that reverses a string.
 *
 * @s: string to be reversed.
 *
 * return: void
 */

void rev_string(char *s)
{
	char tmp;
	int i, len, l;

	len = l = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		l = len - 1;
		tmp = s[i];
		s[i] = s[l];
		s[l--] = tmp;
	}
}
