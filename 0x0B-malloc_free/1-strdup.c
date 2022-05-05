#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly alocated
 * space in memory, containing a copy of the string given as a parameter
 *
 * @str: str is the string to be entered
 *
 * Return: returns a pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0, size = 0;
	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	s = malloc(size * sizeof(char) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for(; i < size; i++)
		s[i] = str[i];

	return (s);
}
