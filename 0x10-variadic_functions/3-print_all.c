#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_char - print char
 * @ap: list of arguments
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print int
 * @ap: list of arguments
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_str - print str
 * @ap: list of arguments
 */
void print_str(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}
/**
 * print_float - print float
 * @ap: list of arguments
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}


/**
 * print_all - prints anything
 * @format: a list type of arguments passed
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *sep = "";

	op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_str},
		{"f", print_float},
		{NULL, NULL}
	};
	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*ops[j].op == format[i])
			{
				printf("%s", sep);
				ops[j].func(ap);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;

	}
	printf("\n");
	va_end(ap);
}
