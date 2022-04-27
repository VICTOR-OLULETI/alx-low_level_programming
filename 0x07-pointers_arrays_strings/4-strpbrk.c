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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == acccept[j])
			{
				return (s + i);
				break;
			}
		}
	}
	return(0);
}
