#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: n is the number of times the character \ should be printed
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int j;
	if ( n > 0)
	{

		for (i = 0; i < n; i++)
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
	}
	_putchar('\n');

}
