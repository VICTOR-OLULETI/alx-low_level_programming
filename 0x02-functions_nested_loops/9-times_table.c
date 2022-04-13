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

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			result = i * j;
			j++;
			if (result == 0)
			{
				_putchar('0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else if (result > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}

		}
		i++;
		_putchar('\n');
	}
}
