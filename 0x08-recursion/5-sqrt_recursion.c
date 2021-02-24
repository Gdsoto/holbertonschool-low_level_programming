#include "holberton.h"

/**
 * test - search sqrt
 * @n: number
 * @j: validator
 * Return: test
 */

int test(int n, int j)
{
	if (j * j == n)
	{
		return (j);
	}
	else if (j * j > n)
	{
		return (-1);
	}
	return (test(n, j + 1));
}

/**
 * _sqrt_recursion - the natural square root of a number
 * @n: number
 * Return: test
 */

int _sqrt_recursion(int n)
{
	return (test(n, 1));
}
