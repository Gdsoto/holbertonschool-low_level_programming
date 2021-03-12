#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: char
 * @n: int
 * Return: void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *y = "";

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		y = va_arg(list, char*);

		if (y != '\0')
		{
			printf("%s", y);
		}
		else
		{
			printf("(nil)");
		}
		if (i == n - 1 || separator == NULL)
		{
			continue;
		}
		else
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
