#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: s is the string you want to check its length.
 * Return: Always length.
 */

int _strlen(char *s)
{
	char a[] = *s;
	int i = 0;
	while (a[i])
		i++;
	return (i);
}
