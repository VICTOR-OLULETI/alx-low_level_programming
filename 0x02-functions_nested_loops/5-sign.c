#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 *@n: n is the number checked
 * Return: Always 0.
 */

int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		ret = -1;
	}
	else
	{
		_putchar('0');
		ret = 0;
	}
	return (ret);
}
