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
	int j, l;
	int sum;

	while(dest[i])
	{
		i++;
	}
	sum = i + n;

	l = 0;
	for (j = i; j < sum; j++)
	{
		dest[j] = src[l];
		l++;
	}

	return (dest);
}
