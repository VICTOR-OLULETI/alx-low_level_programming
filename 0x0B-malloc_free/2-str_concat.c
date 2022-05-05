#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 *
 * @s1: first string entered
 * @s2: second string entered
 *
 * Return: a ointer to the concatednated strings or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, size, i, j;
	char *s;

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	size = size1 + size2;

	s = malloc(sizeof(char) * size + 1);
	if (!s)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		s[i] = s1[i];
	}
	j = 0;
	for (; i < size; i++)
	{
		s[i] = s2[j];
		j++;
	}
	s[i] = '\0';
	return (s);
}
