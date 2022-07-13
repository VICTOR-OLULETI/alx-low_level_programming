#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to dest
 * @dest: memory area to be copied to
 * @src: memory area copied from
 * @n: number of bytes to copy
 * Return: returns a ponter to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
