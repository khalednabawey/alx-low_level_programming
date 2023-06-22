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
	if (c >= 97 && c <= 122)
		return (0);
	return (1);
}
