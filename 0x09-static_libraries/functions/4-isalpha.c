#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 *@c: The chracter to be tested with alphabetic or not.
 *
 * Return: 1 or 0.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
