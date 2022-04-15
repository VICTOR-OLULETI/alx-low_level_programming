#include "main.h"

/**
 * print_square - prints a square , followed by a new line.
 * @size: size of square desired
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, j;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = 0;
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
