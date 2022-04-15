#include "main.h"

/**
 * print_square - prints a square , followed by a new line.
 * @size: size of square desired
 * Return: Always 0.
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	while (i < size && size > 0)
	{
		j = 0;
		while (j < n)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}
	if ( i == 0)
		_putchar('\n');
}
