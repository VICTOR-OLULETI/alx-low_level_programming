#include "main.h"


/**
 * print_number - function that prints an integer
 *
 * @n: the integer to be printed.
 *
 * Return: Always void.
 */

void print_number(int n)
{
	unsigned int k;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	k = n;

	if (k / 10)
		print_number(k / 10);

	_putchar(k % 10 + '0');
}
