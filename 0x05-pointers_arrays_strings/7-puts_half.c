#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: str is the string parameter
 *
 * Return: Always void.
 */

void puts_half(char *str)
{
	int len, n;

	n = 0;
	len = 0;
	while (str[len])
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
		while (n <= len - 1)
		{
			_putchar(str[n]);
			n++;
		}

	}
	else
	{
		n = (len - 1) / 2;
		n += 1;
		while (n <= len - 1)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
