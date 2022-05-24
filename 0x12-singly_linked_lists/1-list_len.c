#include "lists.h"

/**
 * list_len - prints the number of nodes
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *h1 = h;

	while (h1 != NULL)
	{
		h1 = h1->next;
		i++;
	}
	return (i);
}
