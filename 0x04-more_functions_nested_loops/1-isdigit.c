#include "holberton.h"
/**
 * _isdigit - return numbers 1 or 0
 * @c: parameter of entry
 * Return: c
 */

int _isdigit(char c)
{
	int d;

	if (c >= 48 && c <= 57)
	{
		d = 1;
	}
	else
	{
		d = 0;
	}
	return (d);
}
