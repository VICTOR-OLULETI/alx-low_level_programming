#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: s is the string you want to check its length.
 * Return: Always length of string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
