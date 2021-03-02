#include "holberton.h"

/**
 * create_array - creates an array of chars, it with a specific char.
 * @size: size of the array
 * @c: entry parameter
 * Return: char.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(size * sizeof(*str));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
