#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: s is the character to be searched through
 * @accept: is the character used to search through
 * Return: Always char.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (acccept[j] == s[i])
			{
				p = &s[i];
				return (p);
				break;
			}
		}
	}
	return(0);
}
