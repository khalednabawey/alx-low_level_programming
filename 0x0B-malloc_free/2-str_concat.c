#include "main.h"
#include <stdlib.h>
/**
 * str_concat -> Write a function that concatenates two strings.
 *
 * @s1: string.
 * @s2: string.
 *
 * Return: (char *) pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	int ss1, ss2, i, j;

	ss1 = ss2 = i = j = 0;

	while (s1[ss1] != '\0')
		ss1++;
	while (s2[ss2] != '\0')
		ss2++;

	char *str = malloc((ss1 + ss2 + 1) * sizeof(char));

	for (j = 0; j < ss1; j++)
	{
		if (s1[j] != '\0')
		{
			str[i] = s1[j];
			i++;
		}
	}
	for (j = 0; j < ss2; j++)
	{
		if (s2[j] != '\0')
		{
			str[i] = s2[j];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
