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
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; row <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
