#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 tp 23:59
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	for (int num = 0; num <= 2; num++)
	{
		for (int num2 = 0; num2 <= 3; num2++)
		{
			for (int num3 = 0; num3 <= 5; num3++)
			{
				for (int num4 = 0; num4 <= 9; num4++)
				{
					_putchar(num + '0');
					_putchar(num2 + '0');
					_putchar(':');
					_putchar(num3 + '0');
					_putchar(num4 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
