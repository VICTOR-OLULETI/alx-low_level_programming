#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: array of characters
 * @accept: array of character
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0, n = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				k = 1;
				break;
			}
			else
			{
				k = 0;
			}
		}
		n += k;
	}
	return (n);
}
