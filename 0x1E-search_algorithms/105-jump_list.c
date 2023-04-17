#include <stdio.h>
#include "search_algos.h"
#include <math.h>


/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the first node where value is located
 * if head is null or value isn't present it returns NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t left, right, jump, i, bias = 0;
	listint_t *prev, *temp = list;

	if (list == NULL)
		return (NULL);
	left = 0;
	jump = sqrt(size);
	right = jump;
	while (right < size && temp->n < value)
	{
		for (i = left; i < right; i++)
			temp = temp->next;
		left = right;
		right += jump;
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
	}
	if (temp->n < value)
	{
		while (temp)
		{
			prev = temp;
			temp = temp->next;
			if (temp == NULL)
				break;
			bias += 1;
		}
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		left += jump;
	}
	left = left - jump;
	right = right - jump + bias;
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	while (list)
	{
		if (list->index >= left && list->index <= right)
			printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
