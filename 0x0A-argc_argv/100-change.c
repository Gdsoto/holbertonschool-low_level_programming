#include "holberton.h"

/**
 * main - prints the minimum number of coins to make change for an amount.
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int money[] = {25, 10, 5, 2, 1};
	int c = 0, x = 0, m = 0, aux = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		while (aux == 0)
		{
			int i = money[m];

			while (i <= cents)
			{
				c++;
				i = i + money[m];
			}
			if (i > cents)
			{
				i = i - money[m];
			}
			cents = cents - i;
			x += c;
			c = 0;
			if (cents == 0)
			{
				break;
			}
			m++;
		}
	}
	printf("%d\n", x);
	return (0);
}


