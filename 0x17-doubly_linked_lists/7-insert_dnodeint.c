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
	dlistint_t *new;
	dlistint_t *temp;

	if (*h == NULL)
		return (0);
	current = *h;
	if (idx == 0 || current == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (idx != 0)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		idx--;
	}
	if (current->next == NULL)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = current;
	temp = current->prev;
	current->prev = new;
	new->prev = temp;
	temp->next = new;
	return (new);
}
