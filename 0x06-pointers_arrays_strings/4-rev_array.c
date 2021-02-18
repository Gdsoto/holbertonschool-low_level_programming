#include "holberton.h"

/**
 * reverse_array - compare strings
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int k;

	n = n - 1;
	while (i < n)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
		n--;
		i++;
	}
}
