#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 *
 * @min: min is the minimum number
 * @max: max is the maximum number
 *
 * Return: Always 0.
 */

int *array_range(int min, int max)
{
	int len, i, m;
	int *p;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (!p)
		return (NULL);

	m = min;
	for (i = 0; i < len; i++)
	{
		p[i] = m;
		m++;
	}

	return (p);
}
