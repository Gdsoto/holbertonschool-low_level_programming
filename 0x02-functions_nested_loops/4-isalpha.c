#include "holberton.h"
/**
 * _isalpha - return 0 or 1
 * @c: character
 * Return: alpha
*/

int _isalpha(int c)
{
	int alpha;

	if (c > 64 && c < 91)
	{
		alpha = 1;
	}
	else if (c > 96 && c < 123)
	{
		alpha = 1;
	}
	else
	{
		alpha = 0;
	}
	return (alpha);
}
