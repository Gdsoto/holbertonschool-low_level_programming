#include "holberton.h"
/**
 * times_table - prints the 9 times table
 * return: void
*/

void times_table(void)
{
	int i, a, r;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			r = i * a;
			if (r > 9)
			{
				if (a != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
			else
			{
				if (a != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(r + '0');
			}
		}
		_putchar('\n');
	}
}
