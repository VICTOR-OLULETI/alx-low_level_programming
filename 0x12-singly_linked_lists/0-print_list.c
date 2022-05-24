#include "lists.h"
/**
 * print_list - print elements of linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *h1 = h;

	while (h1 != NULL)
	{
		printf("[%d] %s\n", h1->len, h1->str != NULL ? h1->str : "(nil)");
		h1 = h1->next;
		i++;
	}
	return (i);
}
