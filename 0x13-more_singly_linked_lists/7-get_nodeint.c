#include "lists.h"

/**
 * *get_nodeint_at_index - gives the nth node of a linked list
 * @head: head of node
 * @index: index of the node
 *
 * Return: nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index &&  head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
