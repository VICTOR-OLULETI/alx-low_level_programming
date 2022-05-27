#include "lists.h"

/**
 * free_list2 - frees linked list
 * @head: head of a linked list
 *
 * Return: void.
 */
void free_list2(list_p **head)
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
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	list_p *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(list_p));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;
		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_list2(&hptr);
				return (num);
			}
		}
		curr = *h;
		*h = (*h)->next;
		free(curr);
		num++;
	}
	*h = NULL;
	free_list2(&hptr);
	return (num);
}
