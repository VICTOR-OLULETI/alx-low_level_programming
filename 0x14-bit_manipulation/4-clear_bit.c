#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: unsigned long integer
 * @index: index
 *
 * Return: 1 on success or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	if (index >= 64)
		return (-1);
	value = 1 << index;
	if (*n & value)
		*n ^= value;
	return (1);
}
