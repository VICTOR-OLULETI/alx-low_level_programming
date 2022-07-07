#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to head
 * @index: index of node
 * Return: nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	current = head;
	if (current == NULL)
		return (NULL);
	while (index != 0)
	{
		current = current->next;
		index = index - 1;
		if (current == NULL)
			return (NULL);
	}
	return (current);
}
