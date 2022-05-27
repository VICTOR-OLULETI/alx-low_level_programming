#include "lists.h"

/**
 * sum_listint - sum of all the data n of the linked list listint_t
 * @head: head of a linked list
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
