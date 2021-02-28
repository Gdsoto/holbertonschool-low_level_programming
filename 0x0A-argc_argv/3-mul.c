#include "holberton.h"

/**
 * main - Write a program that multiplies two numbers.
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0
 */


int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
