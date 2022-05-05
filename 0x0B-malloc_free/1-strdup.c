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
	char str2[] = str;
	int i;

	if (!str)
	{
		return (NULL);
	}
	s = malloc(sizeof(str2));
       if (s == '\0')
       {
	       return (NULL);
       }


       return (s);
       
       	       
}	
