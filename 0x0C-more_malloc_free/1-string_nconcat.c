#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat ->  a function that concatenates two strings.
 *
 * @s1: string.
 * @s2: string.
 * @n: int.
 *
 * Return: char *.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int ss1;
	int ss2;
	int i;
	int j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ss1 = ss2 = i = j = 0;

	while (s1[ss1] != '\0')
		ss1++;
	while (s2[ss2] != '\0')
		ss2++;
	str = malloc((ss1 + ss2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ss1; j++)
	{
		if (s1[j] != '\0')
		{
			str[i] = s1[j];
			i++;
		}
	}
	if (n >= ss2)
		n = ss2;
	for (j = 0; j < n; j++)
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
