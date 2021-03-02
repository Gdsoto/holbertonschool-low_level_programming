#include "holberton.h"

/**
 * free_grid - frees a 2 dimensional grid by your alloc_grid function.
 * @grid: ponter on pointer
 * @height: height of array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
