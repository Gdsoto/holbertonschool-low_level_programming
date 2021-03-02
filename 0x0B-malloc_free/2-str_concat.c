#include "holberton.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * Return: char.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != 0; i++)
	{
	}
	for (j = 0; s2[j] != 0; j++)
	{
	}
	x = i + j + 1;

	str = malloc(x * sizeof(*str));
	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; s1[i] != 0; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j] != 0; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
