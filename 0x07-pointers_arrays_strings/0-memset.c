#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer
 * @b: entry parameter
 * @n: entry parameter
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
