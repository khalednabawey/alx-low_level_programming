#include "main.h"

/**
 * _isupper ->
 * is a function to check whether the character is upper or not.
 *
 * @c: c is an integer parameter
 * Return: int
 */

int _isupper(int c);
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
