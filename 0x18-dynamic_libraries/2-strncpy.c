#include "main.h"

/**
 * _strcpy - copies string
 * @dest: first string, destination
 * @src: second string, source
 * @n: number of bytes copied
 * Return: string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
