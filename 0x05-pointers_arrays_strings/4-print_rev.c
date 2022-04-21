#include "main.h"

/**
 * print_rev - function that print a string, in reverse.
 * @s: s is the string to print in reverse.
 * Return: Always void.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
