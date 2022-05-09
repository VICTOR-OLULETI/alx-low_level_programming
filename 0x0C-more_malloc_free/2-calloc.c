#include "main.h"
#include <stdlib.h>

/**
 * *_memset - set memory to zero
 *
 * @s - pointer
 * @b - character to be assigned
 * @n - number bytes
 *
 * Return: return a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * *_calloc - allocates memory for an array using malloc
 *
 * @nmemb - elements of an array
 * @size - bytes
 *
 * Return: return pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(sizeof(nmemb) * size);
	if (!p)
		return (NULL);
	_memset(p, 0, (nmemb * size));
	return (p);
}
