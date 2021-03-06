#include "main.h"
#include <stdlib.h>

/**
 * *create_array - initializes it with a specific char.
 *
 * @size: size needed
 * @c: string entered
 *
 * Return: either NULL or a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	s = malloc(sizeof(c) * size);
	if (!s)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
