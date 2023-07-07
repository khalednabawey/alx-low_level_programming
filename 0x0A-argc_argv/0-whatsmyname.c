#include <stdio.h>

/**
 * main -> Write a program that prints its name, followed by a new line.
 *
 * @argc: This is the argument count.
 * @argv: This is the argument vector.
 *
 * Return: returns int 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
