#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * fact - contain the data types
 * @type: datatype
 * @func: The function associated
 */
typedef struct fact
{
	char *type;
	void (*func)();
} fact_t;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printString(va_list param);
void printInt(va_list param);
void printFloat(va_list param);
void printChar(va_list param);

#endif /* VARIADIC_FUNCTIONS_H */
