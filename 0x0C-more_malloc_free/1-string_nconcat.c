#include "holberton.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: cant bytes
 * Return: Char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j] != 0; j++)
	{
	}
	for (i = 0; s2[i] != 0; i++)
	{
	}
	if (n >= i)
		n = i;
	p = malloc(sizeof(char) * (j + n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != 0; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}
		p[i] = '\n';
	return (p);
}
