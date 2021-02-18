#include "holberton.h"

/**
 * _strncat - concatenate two strings
 * @dest: entry parameter
 * @src: entry 2 parameter
 * @n: parameter to src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
	{
	}

	for (j = 0; src[j] != 0 && n > 0; j++)
	{
		dest[i] = src[j];
		i++;
		n--;
	}
	return (dest);
}
