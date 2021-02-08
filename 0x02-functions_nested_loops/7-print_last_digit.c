#include "holberton.h"
/**
 * print_last_digit - print last digit
 * @a: parameter of entry
 * Return: the last digit
*/

int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
	{
		a = 0 - a;
	}
	_putchar(a + '0');
	return (a);
}
