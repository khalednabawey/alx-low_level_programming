#include "main.h"
/**
 * _abs -> a function that checks gets the absolute value for the number
 *
 * @n: n is an integer argument
 *
 * Return:
 * -> The absolute value of n.
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
