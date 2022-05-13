#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: character string for name
 * @f: void function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	void (*f_ptr)(char *) = f;

	if (f_ptr != NULL)
		f_ptr(name);
}
