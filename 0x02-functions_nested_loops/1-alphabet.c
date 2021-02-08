#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * @alphabet - contains a char
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		_putchar(alphabet);
	}
	putchar('\n');
}

