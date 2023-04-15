#include "search_algos.h"
#include "math.h"


/**
 * binary_search_exp - searches for a value in a sorted array of integers
 * using binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @L: left hand bound
 * @R: right hand bound
 * @value: value to search for
 * Return: index where value is located or -1 if array is NULL.
 */
int binary_search_exp(int *array, size_t L, size_t R, int value)
{
	size_t i;
	int m;

	/**
	 * L = 0;
	 * R = size - 1;
	 */
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
		else
			break;
	}
	if (array[m] == value)
	{
		return (m);
	}
	printf("Searching in array: %d\n", array[m + 1]);
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located or -1 if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t temp;


	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	if (array == NULL)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	if (size > (bound + 1))
		temp = bound + 1;
	else
		temp = size;
	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, temp - 1);
	return (binary_search_exp(array, bound / 2, temp - 1, value));
}
