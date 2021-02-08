#include "holberton.h"

/**
 * _islower - return numbers 1 or 0
 * @c: parameter of entry
 * Return: lower
 */

int _islower(int c)
{
	int lower;

	if (c > 96 && c < 123)
	{
		lower = 1;
	}
	else
	{
		lower = 0;
	}
	return (lower);
}
