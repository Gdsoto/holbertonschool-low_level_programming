#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: pointer to pointer
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	int i, j, x, y, count;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			count++;
		}
		count += 1;
	}
	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	count = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			str[count] = av[x][y];
			count++;
		}
		str[count] = '\n';
		count++;
	}
	return (str);
}
