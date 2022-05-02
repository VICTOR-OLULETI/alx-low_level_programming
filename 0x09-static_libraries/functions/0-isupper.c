#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: c is the letter to be checked
 *
 * Return: Always 0 or 1.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
