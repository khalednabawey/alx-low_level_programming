#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %zu\n", sizeof(char));
	printf("Size of int: %zu\n", sizeof(int));
	printf("Size of long int: %zu\n", sizeof(long int));
	printf("Size of long long int: %zu\n", sizeof(long long int));
	printf("Size of float: %zu\n", sizeof(float));
	printf("Size of double: %zu\n", sizeof(double));
	printf("Size of long double: %zu\n", sizeof(long double));
	return (0);
}
