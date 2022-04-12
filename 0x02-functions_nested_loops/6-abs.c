#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar(n);
	}
	else if (n > 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar(n);
	}
	return (0);
}
