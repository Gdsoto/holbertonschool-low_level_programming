#include "holberton.h"
/**
 * _puts - returns a string
 * @str: array/string
 * Return: void
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}