#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: entry parameter
 * @size: size of the square
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int i, r1 = 0, r2 = 0;

	for (i = 0; i < size ; i++)
	{
		r1 += a[(size + 1) * i];
		r2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", r1, r2);
}
