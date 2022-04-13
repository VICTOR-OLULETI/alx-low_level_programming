#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from argument supplied to 98
 *
 * @n: n is the interger number the counting starts from
 * Return : returns the numbers from n to 98 followed by comma and space
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (i = n; i <= 98; i--)
		{
			printf("%d", i);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
