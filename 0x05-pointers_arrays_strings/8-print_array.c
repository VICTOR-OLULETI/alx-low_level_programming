#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: a is the array of integers
 * @n: n is the number of elements of an array of integers
 *
 * Return: Always void.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if ( i != n - 1)
		{
			printf(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
