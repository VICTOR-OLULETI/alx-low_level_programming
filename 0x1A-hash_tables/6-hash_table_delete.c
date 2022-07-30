#include "hash_tables.h"

/**
 * free_list - free a list.
 * @head: pointer to the head of the linked list
 * Return: void
 */

void free_list(hash_node_t *head)
{
	hash_node_t *temp = NULL;

	if (!head)
		return;
	while (head)
	{
		temp = head;
		if (head->key)
			free(head->key);
		if (head->value)
			free(head->value);
		head = head->next;
		free(temp);
	}
}

/**
 * hash_table_delete - Deletes a hash table
 *
 * @ht: Pointer to the hash table
 * Return: void.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t **node = NULL;
	hash_node_t *list = NULL;

	if (!ht)
		return;
	if (!ht->array)
	{
		free(ht);
		return;
	}

	node = ht->array;
	for (; i < ht->size; i++)
		list = node[i], free_list(list);

	free(ht->array);
	free(ht);
}
