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
	char num1;

	num1 = 0;
	while (num1 <= 9)
	{
		_putchar('0' + num1);
		num1++;
	}
	_putchar('\n');
}
