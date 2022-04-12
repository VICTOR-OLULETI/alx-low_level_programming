#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 *@c: The chracter to be tested with alphabetic or not.
 *
 * Return: Always 0.
 */

int _isaplha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
