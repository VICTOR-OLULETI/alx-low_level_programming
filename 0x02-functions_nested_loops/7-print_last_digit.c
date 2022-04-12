#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 *@n: n is the number inputed
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	return (last_digit);
}
