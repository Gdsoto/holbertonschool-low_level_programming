#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * @alphabet - contains a char
 * Return: Always 0 (Success)
*/

int main(void)
{
	char low;

	for (low = 'z' ; low >= 'a' ; low--)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
