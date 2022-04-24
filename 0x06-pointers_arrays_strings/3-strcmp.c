#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: s1 is the first string
 * @s2: s2 is the second string
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, k, n;
        int diff = 0;

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (i > j)
		n = i;
	else
		n = j;

	for (k = 0; k < n; k++)
	{
		diff += s1[k] - s2[k];
	}

	return (diff);
}
