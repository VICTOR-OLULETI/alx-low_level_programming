#include "search_algos.h"
#include "math.h"

/**
 * advanced_binary_temp - searches for a value in a sorted array of integers
 * using advanced binary search algorithm that handles repetition
 * @array: pointer to the first element of the array to search in
 * @L: left hand bound
 * @R: right hand bound
 * @value: value to search for
 * Return: index where value is located or -1 if array is NULL.
 */
int advanced_binary_temp(int *array, size_t L, size_t R, int value)
{
	size_t i;
	int m;

	if (array == NULL)
		return (-1);
	m = ((L + R) / 2);
	if (L != R)
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
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else if (array[m] == value)
			R = m;

		return (advanced_binary_temp(array, L, R, value));
	}
	if (array[m] == value)
		return (m);
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using advanced binary search algorithm which handles repetition
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t L, R;
	int m;

	L = 0;
	R = size - 1;
	if (array == NULL)
	{
		return (-1);
	}
	m = advanced_binary_temp(array, L, R, value);
	if (m != -1)
	{
		return (m);
	}
	printf("Searching in array: %d\n", array[size - 1]);
	return (-1);
}

