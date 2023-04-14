#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t a, b, k;

	a = 0;
	b = sqrt(size);

	if (b < size)
		k = b;
	else
		k = size;
	while (array[k - 1] < value)
	{
		a = b;
		b = b + sqrt(size);
		if (a >= size)
			return (-1);
		if (b < size)
			k = b;
		else
			k = size;
	}
	while (array[a] < value)
	{
		a = a + 1;
		if (b < size)
			k = b;
		else
			k = size;
		if (a == k)
			return (-1);
	}
	if (array[a] == value)
		return (a);
	else
		return (-1);
}
