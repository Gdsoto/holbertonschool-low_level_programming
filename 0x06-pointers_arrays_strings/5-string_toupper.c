#include "holberton.h"

/**
 * string_toupper - change to uppercase
 * @d: string/ array
 * Return: d
*/

char *string_toupper(char *d)
{
	int i, j;

	for (i = 0; d[i] != 0; i++)
	{
	}

	for (j = 0; j <= i; j++)
	{
		if (d[j] >= 97 && d[j] <= 122)
		{
			d[j] = d[j] - 32;
		}
	}
	return (d);
}
