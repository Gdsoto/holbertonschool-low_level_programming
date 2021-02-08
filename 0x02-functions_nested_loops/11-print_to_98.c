#include"holberton.h"

/**
 * print_to_98 - print numbers up to 98 depending and higher or lower
 * @n: counter
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("%d\n", i);
	}
	else
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("%d\n", i);
	}
}
