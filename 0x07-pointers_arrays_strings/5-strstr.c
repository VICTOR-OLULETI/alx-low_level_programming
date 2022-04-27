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
	int i,j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
			{

				break;
			}
		}
		if (needle[j - i] == '\0')
		{
			return (haystack + i);
		}
	}
	return(0)
}
