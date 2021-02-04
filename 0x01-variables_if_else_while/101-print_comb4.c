#include <stdio.h>
/**
 * main - prints hexadecimal numbers
 * @c - contains a char
 * @l - contains a char
 * @x - contains a char
 * Return: Always 0 (Success)
*/

int main(void)
{
	int c = 0;
	int l;
	int x;

	while (c <= 9)
	{
		l = 0;
		while (l <= 9)
		{
			x = 0;
			while (x <= 9)
			{
				if (c < l && l < x)
				{
					putchar(c + 48);
					putchar(l + 48);
					putchar(x + 48);
					if (c != 7 || l != 8 || x != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				x++;
			}
			l++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
