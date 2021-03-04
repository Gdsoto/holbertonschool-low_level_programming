#include "holberton.h"

/**
 * array_range - creates an array of integers.
 * @min: entry parameter
 * @max: entry parameter
 * Return: int
 */

int *array_range(int min, int max)
{
	int i, j = 0;
	int *r;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		for (i = min; i <= max; i++)
		{
			j++;
		}
		r = malloc(sizeof(int) * (j + 1));
		if (r == NULL)
			return (NULL);
		for (i = 0; i < j; i++)
		{
			r[i] = min;
			min++;
		}
		r[i] = '\0';
	}
	return (r);
}
