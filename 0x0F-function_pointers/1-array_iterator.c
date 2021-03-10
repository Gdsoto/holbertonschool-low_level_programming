#include "function_pointers.h"

/**
 * array_iterator - given as a parameter on each element of an array.
 * @array: array
 * @size: size
 * @action: function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
