#include "main.h"

/**
 * times_table - prints the 9 timmes table, starting with 0
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i = 0;
	int j;
	int result = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			result = i * j;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
