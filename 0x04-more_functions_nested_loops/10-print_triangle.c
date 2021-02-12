#include "holberton.h"
/**
 * print_triangle - print a triangle
 * @size: entry value
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 1; x <= size; x++)
			{
				if (x >= size - i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
