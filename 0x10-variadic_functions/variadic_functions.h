#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struch op - structure definition of op_t
 * @op: option
 * @func: function printed
 */

typedef struct op1
{
	char *op;
	void (*func)(va_list);
} op_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
#endif
