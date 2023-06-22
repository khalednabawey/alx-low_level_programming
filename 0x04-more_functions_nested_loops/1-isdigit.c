#include "main.h"

/**
 * _isdigit ->
 * is a function to check whether the character is digit or not.
 *
 * @c: c is an integer parameter
 * Return: int 1 if c is digit 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);
	return (0);
}
