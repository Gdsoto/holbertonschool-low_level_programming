#include "holberton.h"

/**
 * print_array - prints elements of array
 * @a: collection of numbers
 * @n: quantity elements
 * Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int num = a[i];

		printf("%d", num);
		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}

