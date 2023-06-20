#include "main.h"
/**
 * print_to_98 -> a function that prints the natural numbers from n to 98
 *
 * @n: n is an integer argument
 *
 * Return: void (no return)
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d,", n++);
		printf("%d\n", n);
	}
}
