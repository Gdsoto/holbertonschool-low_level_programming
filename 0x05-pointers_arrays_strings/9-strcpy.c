#include "holberton.h"

/**
 * *_strcpy - copy content of string
 * @dest: objetive
 * @src: text
 * Return: a copy
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}