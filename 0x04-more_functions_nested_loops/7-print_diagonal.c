#include "main.h"

/**
 * print_diagonal ->
 * is a function that  draws a diagonal line on the terminal.
 *
 * @n: n and integer parameter.
 * Return: void(no return).
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
