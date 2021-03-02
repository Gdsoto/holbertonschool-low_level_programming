#include "holberton.h"

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: heigth of array
 * Return: char
 */

int **alloc_grid(int width, int height)
{
	int **arg;
	int i, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	arg = malloc(sizeof(int *) * height);
	if (arg == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arg[i] = malloc(sizeof(int *) * width);
		if (arg[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arg[i][j] = 0;
		}
	}
	return (arg);
}
