#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t linked list
 * @head: pointer to head
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while ((curr = head) != NULL)
	{
		free(curr);
		head = head->next;
	}
}
