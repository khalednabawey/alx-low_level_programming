#include "main.h"
#include <stdlib.h>

/**
 * argstostr -> Entry point.
 *
 * @ac: num of arg.
 * @av: arguments.
 *
 * Return: a pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j, k;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++;
	}

	result = malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			result[k++] = av[i][j];
		result[k++] = '\n';
	}
	result[k] = '\0';
	return (result);
}
