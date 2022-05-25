#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a linked list list_t
 * @head: linked list
 * @str: input string
 *
 * Return: address of the new elements or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *new_node;
	int length;

	last = *head;
	while (last && last->next != NULL)
		last = last->next;
	for (length = 0; str[length]; length++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = length;
	new_node->next = NULL;
	if (last)
	{
		last->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
