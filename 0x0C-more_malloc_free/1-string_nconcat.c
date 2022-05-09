#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concattenates two strings
 *
 * @s1 - fisrst string
 * @s2 - second string
 * @n - number of character of the second string to be concatenated
 *
 * Return: a pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = ' ';
	if (s2 == NULL)
		s2 = ' ';

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n > len2)
		n = len2;
	p = malloc(sizeof(*p) * (len1 + n + 1));

	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];	
	p[i] = '\0';
	
	return (p);
}
