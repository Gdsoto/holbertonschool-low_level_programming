#include "holberton.h"
/**
 * rev_string - returns the string in reverse
 * @s: array/string
 * Return: void
*/

void rev_string(char *s)
{
	int i, d;
	char x, y;

	for (i = 0; s[i] != 0; i++)
	{
	}
	i--;
	for (d = 0; d <= i; d++)
	{
		x = s[d];
		y = s[i];
		s[i] = x;
		s[d] = y;
		i--;
	}
}

