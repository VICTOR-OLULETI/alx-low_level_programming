#include "main.h"
/**
 * _islower - checks if lowercase
 * @c: character to be checked
 * Return: 1 if lower case or 0 if not.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
