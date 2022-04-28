#include "main.h"

/**
 * _strlen_recursion  - returns length of string
 * @s: pointer to string parameter
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * is_palin - function that returns 1 if palindrome
 * @len: len is the length of the string
 * @s: s is the string parameter
 * Return: either 0 or 1
 */

int is_palin(char *s, int len)
{
	if (len < 1)
	{
		return (1);
	}
	if (*s == *(s + len))
	{
		return (is_palin(s + 1, len - 2));
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
	return (is_palin(s, len - 1));
}
