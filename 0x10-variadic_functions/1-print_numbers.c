#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: char
 * @n: int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
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
