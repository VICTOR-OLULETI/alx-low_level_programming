#include "lists.h"

/**
 * print_dlistint - prints all elements of a double linked list
 * @h: pointer to the head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t num = 0;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		num++;
	}
	return (num);
}
