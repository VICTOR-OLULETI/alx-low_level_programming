#include "main.h"

/**
 * is_palin - function that returns 1 if palindrome
 * @i: i is the integer parameter
 * @len: len is the length of the string
 * @s: s is the string parameter
 */

int is_palin(char *s, int i, int len)
{
	if (i <= len && len >= i)
	{
		if (s[i] == s[len])
		{
			is_palin(s, i + 1, len -1);
			return (1);
		}
	}
	return (0);
}
/**
 * is_palindrome - function that returns 1 if a string is a
 * palindrome or 0 if not
 * @s: s is the string to be tested if palindrome
 * Return: either 0 or 1.
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (is_palin(s, 0, len - 1));
}
