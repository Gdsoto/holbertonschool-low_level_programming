#include "holberton.h"

/**
 * leet - encodes a string into 1337.
 * @d: string/ array
 * Return: d
*/

char *leet(char *d)
{
	int i, j;

	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; letters[i] != 0; i++)
	{
		for (j = 0; d[j] != 0; j++)
		{
			if (d[j] == letters[i])
			{
				d[j] = numbers[i];
			}
		}
	}
	return (d);
}
