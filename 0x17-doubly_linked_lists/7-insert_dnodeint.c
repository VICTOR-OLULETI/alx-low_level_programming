#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given postion
 * @h: pointer to pointer to head
 * @idx: index of node
 * @n: data
 * Return: address to the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node;

	current = *h;
	if (current == NULL)
		return (NULL);
	while (idx != 0)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		idx = idx - 1;
	}
	if (current->next == NULL)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = current;
	new_node->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = new_node;
	return (new_node);
}
