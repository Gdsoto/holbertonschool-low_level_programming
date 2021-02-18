#include "holberton.h"

/**
 * _strcmp - compare strings.
 * @s1: first array
 * @s2: second array
 * Return: j
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j;

	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		j = s1[i] - s2[i];
		if (j != 0)
		{
			return (j);
		}
	}
	return (j);
}
