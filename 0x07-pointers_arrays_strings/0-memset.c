#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: the memory area
 * @b: the constant byte
 * @n: the unsigned int
 *
 * Return: Always char.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
