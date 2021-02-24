#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer of entry
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int j, i = 1;

	if (*s == '\0')
	{
		return (i - 1);
	}
	else
	{
		j = _strlen_recursion(s + 1);
		return (j + i);
	}
}
