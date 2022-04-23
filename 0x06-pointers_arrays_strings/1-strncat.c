#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: the number of bytes of the second string to be
 * concatenated
 *
 * Return: Always char.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;
	int sum;

	while(dest[i])
	{
		i++;
	}
	sum = i + j;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[sum] = src[j];
	}
	dest[sum++] = '\0';

	return (dest);
}
