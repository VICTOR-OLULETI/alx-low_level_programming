#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 *
 * @s: the string entered
 *
 * Return: Always char.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			s[0] = s[0] - 32;
			if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			{
				i++;
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
