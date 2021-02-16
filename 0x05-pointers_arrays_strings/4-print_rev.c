#include "holberton.h"
/**
 * print_rev - returns the string in reverse
 * @s: array/string
 * Return: void
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

