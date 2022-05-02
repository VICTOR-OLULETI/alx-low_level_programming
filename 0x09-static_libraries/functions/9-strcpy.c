#include "main.h"

/**
 *  *_strcpy - function that copies the string pointed to by src.
 * @dest: dest is the first string.
 * @src: src is the second string.
 * Return: return value the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
