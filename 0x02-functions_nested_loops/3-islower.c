#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *@c: The character to be test either lowercase or otherwise
 * Return: Always 0.
 *
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
