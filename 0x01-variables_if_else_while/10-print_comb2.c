#include <stdio.h>
/**
 * main - prints hexadecimal numbers
 * @n - contains a char
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
			putchar(c + 48);
			putchar(l + 48);
			if (c != 9 || l != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
