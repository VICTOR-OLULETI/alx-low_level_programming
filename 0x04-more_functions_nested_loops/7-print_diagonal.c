#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: n is the number of times the character \ should be printed
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i = 0;
	int k;

	while (i < n && n > 0)
	{
		k = 0;
		while (k < i)
		{
			_putchar(' ');
			k++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
