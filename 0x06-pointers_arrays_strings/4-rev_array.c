#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array of integers
 * @n: number of elements of the array
 *
 * Return: Always void.
 */

void reverse_array(int *a, int n)
{
	int half, j, temp;

	half = n / 2;
	for (j = 0; j < half; j++)
	{
		temp = a[n - j - 1];
		a[n - j - 1] = a[j];
		a[j] = temp;
	}


}
