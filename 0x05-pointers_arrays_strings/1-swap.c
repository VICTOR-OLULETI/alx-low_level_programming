#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: a is first integer value
 * @b: b is second integer value.
 * Return: Always void.
 */

void swap_int(int *a, int *b)
{
	int *p;

	*p = *a + *b;
	*b = *p - *b;
	*a = *p - *a;
}
