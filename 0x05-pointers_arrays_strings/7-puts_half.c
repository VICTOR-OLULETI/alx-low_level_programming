#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: str is the string parameter
 *
 * Return: Always void.
 */

void puts_half(char *str)
{
	int len, n, i, j;

	i = 0;
	while (str[i])
	{
		i++;
	}

	len = i + 1;
	if ( len % 2 == 0)
	{
		n = len / 2;
		j = n;
		while (j >= n && j <= len - 1)
		{
			_putchar(str[j]);
			j++;
		}

	}
	else
	{
		n = (len - 1) / 2;
		j = n + 1;
		while (j > n && j <= len -1)
		{
			_putchar(str[j]);
			j++;
		}
	}
}
