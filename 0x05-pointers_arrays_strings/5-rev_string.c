#include "main.h"

/**
 * rev_string - reverses a string
 * @s: s is the string to be reversed
 *
 * Return: Always void.
 */

void rev_string(char *s)
{
	int j, i, half;
	char temp;

	i = 0;
	while (s[i])
		i++;
	half = i / 2;
	j = 0;

	while (half--)
	{
		temp = s[i - j - 1];
		s[i - j - 1] = s[j];
		s[j] = temp;
		j++;
	}
}
