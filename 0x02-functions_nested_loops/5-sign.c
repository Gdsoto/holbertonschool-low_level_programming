#include "holberton.h"
/**
 * print_sign - Checks if input number is positive, negative, or zero
 * @a: number
 * Return: returns 1, 0, -1
 */

int print_sign(int a)
{
	if (a == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (a > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
