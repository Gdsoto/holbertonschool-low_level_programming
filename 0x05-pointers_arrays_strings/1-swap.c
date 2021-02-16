#include "holberton.h"
/**
 * swap_int - return modify pointer
 * @a: parameter of entry
 * @b: parameter of entry
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}

