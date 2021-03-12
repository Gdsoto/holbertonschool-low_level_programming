#include "variadic_functions.h"

/**
 * printString - print a string.
 * @param: entry parameter
 */
void printString(va_list param)
{
	char *len = "(nil)";

	if (len != NULL)
	{
		len = va_arg(param, char*);
	}
	printf("%s", len);
}

/**
 * printInt - print a int.
 * @param: entry parameter
 */
void printInt(va_list param)
{
	printf("%d", va_arg(param, int));
}

/**
 * printFloat - print a float.
 * @param: entry parameter
 */
void printFloat(va_list param)
{
	printf("%f", va_arg(param, double));
}

/**
 * printChar - print a char.
 * @param: entry parameter
 */
void printChar(va_list param)
{
	printf("%c", va_arg(param, int));
}

/**
 * print_all - prints anything.
 * @format: entry parameter
 * Return:void
 */

void print_all(const char * const format, ...)
{
	fact_t stfun[] = {
		{"i", printInt},
		{"f", printFloat},
		{"c", printChar},
		{"s", printString}
	};

	va_list list;
	int i = 0, j = 0;
	char *separator = "";

	va_start(list, format);

	while (format && format[j])
	{
		i = 0;
		while (j < 4)
		{
			if (format[j] == stfun[i].type[0])
			{
				printf("%s", separator);
				stfun[i].func(list);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(list);
}
