#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: array of characters
 * @accept: substring character
 *
 * Return: Length of occurrence.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				k++;
				break;
			}
		}

	}
	return (k);
}
