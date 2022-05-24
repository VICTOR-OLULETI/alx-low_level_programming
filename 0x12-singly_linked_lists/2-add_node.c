#include "lists.h"

/**
 * *add_node - adds a new node at the begining of a linked list
 * @head: linked list
 * @str: string input
 *
 * Return: address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int length;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node ==  NULL)
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
	for (length = 0; str[length] != '\0'; length++)
		;
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

