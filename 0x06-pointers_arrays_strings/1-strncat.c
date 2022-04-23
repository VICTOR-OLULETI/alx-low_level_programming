#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: the number of bytes of the second string to be
 * concatenated
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while(dest[i])
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
