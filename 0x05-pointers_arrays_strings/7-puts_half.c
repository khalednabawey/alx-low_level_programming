#include "main.h"

/**
 * puts_half -> prints half of a string followed by a new line.
 *
 * @str: string pointer.
 *
 * return: void.
 */
void puts_half(char *str)
{
	int len, l, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (l = (len - 1) / 2; l < len - 1; l++)
		{
			_putchar(str[l + 1]);
		}
	}
	_putchar('\n');
}
