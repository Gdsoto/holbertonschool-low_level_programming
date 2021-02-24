#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x:value
 * @y:power
 * Return: j
 */

int _pow_recursion(int x, int y)
{
	int j = x;

	if (y != 0)
	{
		if (y > 1)
		{
			j = _pow_recursion(x, y - 1);
			j = j * x;
		}
		else if (y < 0)
		{
			j = -1;
		}
	}
	else
	{
		j = 1;
	}
	return (j);
}
