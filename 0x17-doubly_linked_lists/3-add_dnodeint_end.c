#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of linked list
 * @head: pointer to pointer to head
 * @n: data for new node
 * Return: address of new element or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_node;

	current = *head;
	while (current &&  current->next != NULL)
		current = current->next;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = current;
	if (current == NULL)
		*head = new_node;
	else
		current->next = new_node;
	return (new_node);
}
