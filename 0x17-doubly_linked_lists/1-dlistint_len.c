#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: pointer to head
 *
 * Return: number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t sum_nodes = 0;

	if (h == NULL)
		return (0);
	while (curr != NULL)
	{
		curr = curr->next;
		sum_nodes++;
	}
	return (sum_nodes);
}
