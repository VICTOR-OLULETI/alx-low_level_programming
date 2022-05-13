#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: size of array
 * @action: void pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*array_ptr)(int) = action;
	size_t i;

	if (array != NULL && array_ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array_ptr(array[i]);
		}
	}
}
