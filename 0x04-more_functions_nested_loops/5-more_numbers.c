#include "main.h"

/**
 * more_numbers ->
 * is a function that prints the numbers, from 0 to 14, 10 times.
 *
 * Return: void(no return).
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar('0' + 1);
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}

