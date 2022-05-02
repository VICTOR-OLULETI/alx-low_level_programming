#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: the number of bytes of the second string
 *
 * Return: Always char.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;


	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
