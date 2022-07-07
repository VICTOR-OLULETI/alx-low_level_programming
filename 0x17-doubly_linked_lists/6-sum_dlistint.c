#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data of a linked list
 * @head: pointer to head
 * Return: sum  of all data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	dlistint_t *next;
	int sum = 0;

	curr = head;
	if (curr == head)
		return (sum);
	while (curr != NULL)
	{
		next = curr->next;
		sum += curr->n;
		curr = next;
	}
	return (sum);
}
