#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in string @accept
 * @s: string to be searched
 * @accept: string where bytes is located
 * Return: a pointer to the byte in s or NULL if not found
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
