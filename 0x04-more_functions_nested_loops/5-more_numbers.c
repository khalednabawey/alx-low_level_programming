#include "main.h"

/**
 * more_numbers ->
 * is a function that prints the numbers, from 0 to 14, 10 times.
 *
 * Return: void(no return).
 */

void more_numbers(void)
{
	int i, j, k;

	for (j = 0; j <= 10; j++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}
		for (k = '0'; k <= '4'; k++)
		{
			_putchar('1');
			_putchar(k);
		}
		_putchar('\n');
	}
}

