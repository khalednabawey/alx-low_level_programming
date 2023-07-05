#include "main.h"

/**
 * power -> returns the natural square root of a number.
 * @n: int input number.
 * @p: int iterator.
 * Return: int.
 */
int power(int n, int p)
{
	if (p % (n / p) == 0)
	{
		if (p * (n / p) == n)
			return (p);
		else
			return (-1);
	}
	return (0 + power(n, p + 1));
}
/**
 * _sqrt_recursion -> returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power(n, 2));
}
