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

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (k);
}
