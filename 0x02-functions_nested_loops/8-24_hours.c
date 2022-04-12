#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 tp 23:59
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int num, num2, num3, num4;

	for (num = 0; num <= 2; num++)
	{
		for (num2 = 0; num2 <= 3; num2++)
		{
			for (num3 = 0; num3 <= 5; num3++)
			{
				for (num4 = 0; num4 <= 9; num4++)
				{
					_putchar(num + '0');
					_putchar(num2 + '0');
					_putchar(':');
					_putchar(num3 + '0');
					_putchar(num4 + '0');
					if (num == 2 && num2 == 3 && num3 == 5
					    && num4 == 9)
						continue;
					_putchar('\n');
				}
			}
		}
	}
}
