#include "holberton.h"
/**
 * _isupper - return numbers 1 or 0
 * @c: parameter of entry
 * Return: c
 */

int _isupper(char c)
{
	int up;

	if (c >= 65 && c <= 90)
	{
		up = 1;
	}
	else
	{
		up = 0;
	}
	return (up);
}
