#include <stdio.h>
/**
 * main - prints hexadecimal numbers
 * @n - contains a char
 * Return: Always 0 (Success)
*/

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + 48);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
