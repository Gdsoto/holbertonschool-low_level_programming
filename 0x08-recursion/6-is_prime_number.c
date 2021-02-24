#include "holberton.h"

/**
 * test - determines if the number is odd or even
 * @n: number
 * @x: counter
 * @c: counter
 * Return: c
 */

int test(int n, int x, int c)
{
	int p;

	if (x <= n)
	{
		if (n % x == 0)
		{
			c = c + 1;
		}
		x = x + 1;
		p = test(n, x, c);
		c = p;
	}
	return (c);
}

/**
 * is_prime_number - 1 if the input integer is a prime number
 * @n: number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int p, x = 1, c = 0;

	p = test(n, x, c);

	if (p == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


