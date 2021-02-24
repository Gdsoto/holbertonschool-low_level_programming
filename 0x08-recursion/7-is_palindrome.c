#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer of entry
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int j, i = 1;

	if (*s == '\0')
	{
		return (i - 1);
	}
	else
	{
		j = _strlen_recursion(s + 1);
		return (j + i);
	}
}

/**
 * _test - returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer of entry
 * @len: length of pointer
 * Return: 0 or 1
 */

int _test(char *s, int len)
{
	if (*s == *(s + (len - 1)))
	{
		return (_test(s + 1, len - 2));
	}
	else if (len <= 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - Principal Function
 * @s: pointer of entry
 * Return: _test
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (_test(s, len));
}
