#include "holberton.h"

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, j, x;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (x = 0; *(argv[i] + x) != '\0'; x++)
			{
				if (argv[i][x] >= 48 && argv[i][x] <= 57)
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			j += atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
