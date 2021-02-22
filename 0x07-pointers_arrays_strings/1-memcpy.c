#include "holberton.h"

/**
 * _memcpy - fills memory with a constant byte.
 * @dest: pointer
 * @src: entry parameter
 * @n: entry parameter
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
