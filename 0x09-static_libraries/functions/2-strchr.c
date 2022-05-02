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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
