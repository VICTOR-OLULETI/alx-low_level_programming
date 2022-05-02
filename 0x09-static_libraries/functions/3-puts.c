#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line.
 * @str: str is the string to be printed out.
 *
 * Return: Always void.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
