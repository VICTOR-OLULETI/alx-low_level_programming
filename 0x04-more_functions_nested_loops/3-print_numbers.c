#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9,
 * followed by a new line.
 * @num: num is the number printed out
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	char num;

	for (num = 0; num <= 9; num++)
		_putchar('0' + num);
	_putchar('\n');
}
