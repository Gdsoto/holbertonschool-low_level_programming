#include "holberton.h"
/**
 * jack_bauer - print hours
 * return: void
*/

void jack_bauer(void)
{
	int hour1, min1;

	for (hour1 = 0; hour1 <= 23; hour1++)
	{
		for (min1 = 0; min1 <= 59; min1++)
		{
			_putchar(hour1 / 10 + '0');
			_putchar(hour1 % 10 + '0');
			_putchar(':');
			_putchar(min1 / 10 + '0');
			_putchar(min1 % 10 + '0');
			_putchar('\n');
		}
	}
}
