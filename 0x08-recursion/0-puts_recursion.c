#include "main.h"

/**
 * _puts_recursion ->  a function that prints a string, followed by a new line.
 *
 * @s: pointer to a character.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		return;
	_putchar(s[0]);
	_puts_recursion(++s);
	_putchar('\n');
}
