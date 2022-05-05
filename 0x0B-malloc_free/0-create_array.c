#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with a specific char.
 *
 * @size: size needed
 * @c: string entered
 *
 * Return: either NULL or a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(c) * size);

	return (s);
}
