#include "main.h"
/**
 * _strstr - finds first occurrence of substring
 * @s1: string where search is made
 * @s2: string whose occurence is searched in s1
 * Return: a pointer to the beginning of substring
 */
char *_strstr(char *s1, char *s2)
{
	int i;

	if (*s2 == 0)
		return (s1);
	while (*s1)
	{
		i = 0;

		if (s1[i] == s2[i])
		{
			do {
				if (s2[i + 1] == '\0')
					return (s1);
				i++;
			} while (s1[i] == s2[i]);
		}
		s1++;
	}
	return ('\0');
}
