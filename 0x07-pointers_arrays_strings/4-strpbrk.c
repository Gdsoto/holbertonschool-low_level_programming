#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to analyze
 * @accept: strint to analyze from
 * Return: position
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				k = 1;
				break;
			}
		}
		if (k == 1)
		{
			break;
		}
	}
	if (k == 1)
	{
		return (s + i);
	}
	else
	{
		return ('\0');
	}
}
