#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at given index of linked list
 * @head: pointer to pointer to head
 * @index: index of node to be deleted
 * Return: 1 if success or -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;

	if (*head == NULL)
		return (-1);
	curr = *head;
	while (index != 0)
	{
		curr = curr->next;
		index--;
		if (curr == NULL)
			return (-1);
	}
	/* head node deletion */
	if (*head == curr)
		*head = curr->next;

	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	/* Change prev if node to be deleted is not first node */
	if (curr->prev != NULL)
		curr->prev->next = curr->next;
	free(curr);
	return (1);
}
