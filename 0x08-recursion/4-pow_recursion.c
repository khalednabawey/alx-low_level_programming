#include "main.h"

/**
 * _pow_recursion -> a function that returns the value of x raised
 * to the power of y.
 * @x: the int base.
 * @y: the int power.
 *
 * Return: int.
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x *  _pow_recursion(x, --y));
}
