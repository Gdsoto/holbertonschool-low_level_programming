#include "holberton.h"

/**
 * _strdup - pointer to a newly allocated space in memory.
 * @str: pointer of entry.
 * Return: nwstr.
 */

char *_strdup(char *str)
{
	char *nwstr;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != 0; i++)
	{
	}
	i += 1;
	nwstr = malloc(i * sizeof(*nwstr));
	if (nwstr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		nwstr[j] = str[j];
	}
	nwstr[i] = '\0';
	return (nwstr);
}
