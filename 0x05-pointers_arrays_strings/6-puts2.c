#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: str is the string to be printed
 *
 * Return: Always void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}