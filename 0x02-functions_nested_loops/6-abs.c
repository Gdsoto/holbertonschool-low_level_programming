#include "holberton.h"
/**
 * _abs - return numbers 1 or 0
 * @a: parameter of entry
 * Return: abs
*/

int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
}
