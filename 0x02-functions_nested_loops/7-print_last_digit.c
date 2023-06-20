#include "main.h"
/**
 * print_last_digit -> a function that prints the last digit of a number
 *
 * @n: n is an integer argument
 *
 * Return:
 * -> The last digit of n.
 */
int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}
