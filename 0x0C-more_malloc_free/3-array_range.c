#include "main.h"
#include <stdio.h>
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
	int len, i;
	int *p;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	p = malloc(sizeof(int) * len);

	for (i = 0; i < len; i++, min++)
	{
		p[i] = min;
	}

	return (p);
}
