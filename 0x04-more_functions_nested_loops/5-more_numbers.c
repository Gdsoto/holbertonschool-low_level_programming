#include "holberton.h"
/**
 * more_numbers - print the numbers 0 - 14
 * Return: c
 */

void more_numbers(void)
{
	int n;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar('1');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
