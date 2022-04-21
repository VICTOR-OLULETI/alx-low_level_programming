#include "main.h"

/**
 * rev_string - reverses a string
 * @s: s is the string to be reversed
 *
 * Return: Always void.
 */

void rev_string(char *s)
{
	char *s2;
	int j;
	char temp;
	int i;

	while (s[i])
	{
		i++;
	}
	s2 = s;
	while (i--)
	{
		j = 0;
		temp = s2[i];
		s[j]= temp;
		j++;
	}
}
