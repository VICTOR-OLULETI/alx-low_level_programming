#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string1;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string1 = va_arg(ap, char*);
		if (string1 == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string1);
		}
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
