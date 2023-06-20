#include "main.h"
/**
 * print_times_table ->  a function that prints the n time tables,
 *
 * @n: n integer argument
 * Return: void (no return)
 */
void times_table(int n)
{
	int i, j, r;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			r = i * j;
			_putchar(',');
			_putchar(' ');
			(r / 10) ? _putchar('0' + r / 10) : _putchar(' ');
			_putchar('0' + r % 10);
		}
		_putchar('\n');
	}
}
