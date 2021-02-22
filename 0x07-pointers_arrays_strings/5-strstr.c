#include "holberton.h"

/**
 * _strstr - locates a character in a string.
 * @haystack: entry parameter
 * @needle: entry parameter
 * Return: haystack + i or '\0'
 *
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
			{
				break;
			}
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
		{
		return (haystack + i);
		}
	}
	return (0);
}
