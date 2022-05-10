#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b - b is the integer variable
 *
 * Return: return a pointer or NULL to the alocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
		exit(98);

	return (p);
}
