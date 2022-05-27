#include "lists.h"

/**
 * free_l - frees a linked list
 * @head: head of a linked list
 *
 * Return: void.
 */
void free_l(list_p **head)
{
	list_p *temp;
	list_p *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list
 * @head: head of a list.
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	list_p *h, *new_node, *add;

	h = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(list_p));

		if (new_node == NULL)
			exit(98);
		new_node->p = (void *)head;
		new_node->next = h;
		h = new_node;
		add = h;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_l(&h);
				return (num);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num++;
	}
	free_l(&h);
	return (num);
}

