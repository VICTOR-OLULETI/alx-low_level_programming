#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: the char pointer
 * @src: memory area
 * @n: number of bytes
 *
 * Return: Always char.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
