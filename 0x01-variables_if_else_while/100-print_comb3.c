#include <stdio.h>
/**
 * main - prints hexadecimal numbers
 * @c - contains a char
 * @l - contains a char
 * Return: Always 0 (Success)
*/

int main(void)
{
	int c;
	int l;

	for (c = 0; c <= 9; c++)
	{
		for (l = 0; l <= 9; l++)
		{
			if (c < l)
			{
				putchar(c + 48);
				putchar(l + 48);
				if (c != 8 || l != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
