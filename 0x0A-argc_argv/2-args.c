#include "holberton.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
