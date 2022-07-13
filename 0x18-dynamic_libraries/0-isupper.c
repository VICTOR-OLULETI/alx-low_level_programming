#include "main.h"
/**
 * _isupper - function that checks if uppercase or not
 * @c: character
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
