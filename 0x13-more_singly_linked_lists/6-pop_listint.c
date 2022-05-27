#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head
 *
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	int nnode;
	listint_t *h;
	listint_t *current;

	if (head == NULL)
		return (0);
	current = *head;
	nnode =  current->n;
	h = current->next;
	free(current);
	*head = h;
	return (nnode);
}
