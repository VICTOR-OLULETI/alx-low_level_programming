#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints a number, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1 && separator != NULL)
			printf("%s ", separator);
	}
	_putchar('\n');
	va_end(ap);
}
