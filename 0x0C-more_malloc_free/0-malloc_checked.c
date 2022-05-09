#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b - b is the integer variable
 *
 * Return: return a pointer or NULL to the alocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	
	if (!p)
		exit(98);
	return (p);
}
