#include "holberton.h"
/**
 * print_square - draws a square in terminal
 * @size: parameter of entry.
 * Return: void
 */

void print_square(int size)
{
	int i;
	int x;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
