#include "main.h"

/**
 * print_times_table - prints the n times table, staring with 0.
 *
 *@n: n is times table desired to be printed
 *
 * Return: returns the times table selected
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			putchar('0');
			for (j = 1; j <= n; j++)
			{
				result = i * j;
				_putchar(',');
				_putchar(' ');
				if (result > 99)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) + '0');
				}
				else if (result > 9)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');

				}
				else

					_putchar(' ');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
