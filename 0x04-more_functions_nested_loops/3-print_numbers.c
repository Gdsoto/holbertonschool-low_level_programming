#include "holberton.h"
/**
 * print_numbers - print the numbers 0 - 9
 * Return: c
 */

void print_numbers(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}