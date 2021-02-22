#include "holberton.h"

/**
 * _strchr - fills memory with a constant byte.
 * @s: pointer
 * @c: entry parameter
 * Return: s or '\0'
 */

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s == '\0')
		{
			return ('\0');
		}
	}
}
