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
	int i, j;

	if (!str)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	s = malloc(sizeof(str) * i);
       if (!s)
       {
	       return (NULL);
       }
       for (j = 0; j < i; j++)
       {
	       s[j] = str[j];
       }


       return (s);
}
