#include <stdio.h>
/**
 * main - prints the first 10 natural numbers
 * @alphabet - contains a char
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
