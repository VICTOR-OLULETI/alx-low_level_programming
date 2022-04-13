#include "main.h"

/**
 * print_to_98 - prints from argument supplied to 98
 *
 * @n: n is the interger number the counting starts from
 * Return : returns the numbers from n to 98 followed by comma and space
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
