#include "main.h"

/**
 * print_square ->
 * is a function that prints a square, followed by a new line.
 *
 * @size: size and integer parameter.
 * Return: void(no return).
 */

void print_square(int size)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
