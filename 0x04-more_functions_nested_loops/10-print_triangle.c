#include "main.h"

/**
 * print_triangle - prints a triangle, followoed by a new line.
 * @size: determines the size of the triangle
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i = 1;
	int j;

	if (size > 0)
	{
		while (i <= size)
		{
			j = 0;
			while (j < size - i)
			{
				_putchar(' ');
				j++;
			}
			j = 0;
			while (j < i)
			{
				_putchar('#');
				j++;
			}

			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
