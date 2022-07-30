#include "hash_tables.h"

/**
 * key_index - gives the index of a given key.
 * @key: pointer to the key
 * @size: size of hash table
 *
 * Return: index of the key in the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);
	index %= size;

	return (index);
}
