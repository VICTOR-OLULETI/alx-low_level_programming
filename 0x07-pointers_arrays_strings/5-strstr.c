#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: Return a pointer to the begining of the located substring.
 */

char *_strstr(char *haystack, char *needle)
{
	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (haystack + j);
				break;
			}
		}
	}
	return(0);
}
