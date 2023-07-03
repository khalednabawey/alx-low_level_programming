#include "main.h"

/**
 * _strspn -> a function that gets the length of a prefix substring.
 *
 * @s: string to get its length.
 * @accept: string.
 *
 * Return: int.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (j);
}
