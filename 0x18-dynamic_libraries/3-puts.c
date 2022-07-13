#include "main.h"
/**
 * _puts - prints a string
 * @str: string
 *
 * Return: number of characters printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
