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
	int j;

	while (i < n && n > 0)
	{
		j = 0;
		while(j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n == 0)
		_putchar('\n');

}
