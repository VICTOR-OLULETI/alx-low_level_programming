#include "lists.h"

/**
 * free_list - frees a linked list list_t
 * @head: linked list
 *
 * Return: Always void.
 */

void free_list(list_t *head)
{
	list_t *last;
	list_t *n;

	last = head;
	while (last != NULL)
	{
		n = last->next;
		free(last);
		free(last->str);
		last = n;
	}
}
