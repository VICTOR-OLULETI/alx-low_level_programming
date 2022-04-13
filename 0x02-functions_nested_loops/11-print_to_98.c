#include "main.h"

/**
 * print_to_98 - prints from argument supplied to 98
 *
 * @n: n is the interger number the counting starts from
 * Return : returns the numbers from n to 98 followed by comma and space
 */

void print_to_98(int n)
{
	for (n; n <= 98; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
