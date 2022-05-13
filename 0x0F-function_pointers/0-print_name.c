#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: character string for name
 * @f: void function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
