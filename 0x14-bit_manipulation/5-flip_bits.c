#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to another number
 * @n: integer 1
 * @m: integer 2
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b;

	for (b = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			b++;
		}
	}
	return (b);
}
