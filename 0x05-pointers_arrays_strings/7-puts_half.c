#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: str is the string parameter
 *
 * Return: Always void.
 */

void puts_half(char *str)
{
	int len, n, i;

	n = 0;
	i = 0;
	while (str[i])
	{
		i++;
	}

	len = i + 1;
	if (len % 2 == 0)
	{
		n = len / 2;
		while ( n <= i)
		{
			_putchar(str[n]);
			n++;
		}

	}
	else
	{
		n = (len - 1) / 2;

		while (n <= i)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
