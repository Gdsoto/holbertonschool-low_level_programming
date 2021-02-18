#include "holberton.h"
/**
 * rot13 - change the letters
 *@d: entry parameter
 *Return: n variable
*/

char *rot13(char *d)
{
	int i, j;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; d[i] != 0; i++)
	{
		for (j = 0; letters[j] != 0; j++)
		{
			if (d[i] == letters[j])
			{
				d[i] = rot13[j];
				break;
			}
		}
	}
	return (d);
}
