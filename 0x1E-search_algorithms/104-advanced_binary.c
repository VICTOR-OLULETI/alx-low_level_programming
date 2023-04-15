#include "search_algos.h"
#include "math.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t L, R, i;
	int m;

	L = 0;
	R = size - 1;
	if (array == NULL)
	{
		return (-1);
	}
	m = ((L + R) / 2);
	while (L != R)
	{
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			if (i == R)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		m = ((L + R) / 2);
		if (array[m] < value)
		{
			L = m + 1;
		}
		else if (array[m] > value)
		{
			R = m - 1;
		}
		else if (array[m] == value)
		{
			R = m;
		}
	}
	if (array[m] == value)
		return (m);
	printf("Searching in array: %d\n", array[size - 1]);
	return (-1);
}

