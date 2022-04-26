#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: s is the array of characters
 * @c: c is the character to be located
 *
 * Return: A pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			for (j = i; s[j] != '\0'; j++)
			{
				_putchar(s[j]);
			}
			return (s);
			break;
		}

		i++;
	}
	return (NULL);
}
