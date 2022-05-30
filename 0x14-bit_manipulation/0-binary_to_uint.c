#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: character to be converted.
 *
 * Return: converted number or NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i, len, value = 1;
	
	if (b == NULL)
		return (0);
	for (len = 0; b[len]; len++)
		;
	for (i = 0; i < len; i++, value *= 2)
	{
		if (b[len - i - 1] != '0' && b[len - i - 1] != '1')
			return (0);
		if (b[len - i - 1] == '1')
		{
			sum += value;
		}
	}
	return (sum);
}
