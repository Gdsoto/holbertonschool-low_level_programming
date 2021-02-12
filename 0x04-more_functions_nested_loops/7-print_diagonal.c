#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: parameter of entry.
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int x;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != 0)
			{
				for (x = 0; x < i; x++)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
