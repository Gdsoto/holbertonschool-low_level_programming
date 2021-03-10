#include "function_pointers.h"

/**
 * print_name - that prints a name.
 * @name: entry parameter
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
