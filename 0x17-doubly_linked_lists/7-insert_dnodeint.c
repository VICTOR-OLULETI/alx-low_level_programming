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
	unsigned int id;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		current = *h;
		id = 1;
		while (current != NULL)
		{
			if (id == idx)
			{
				if (current->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = current->next;
						new->prev = current;
						current->next->prev = new;
						current->next = new;
					}
				}
				break;
			}
			current = current->next;
			id++;
		}
	}
	return (new);
}
