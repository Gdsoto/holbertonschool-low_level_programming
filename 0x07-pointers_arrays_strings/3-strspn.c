#include "holberton.h"

/**
 * *_strspn - Function that locates a character in a string.
 * @s: Entry parameter.
 * @accept: Entry parameter
 * Return: k.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (k);
}
