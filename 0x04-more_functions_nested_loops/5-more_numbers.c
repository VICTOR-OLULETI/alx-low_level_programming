#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 * Return: Always 0.
 */

void more_numbers(void)
{
	char num;
	int num2 = 0;
	char c;

	while (num2 < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			c = num;
			if (num > 9)
			{
				_putchar('1');
				c = num % 10;
			}
			_putchar(c + '0');
		}
		num2++;
		_putchar('\n');
	}
}
