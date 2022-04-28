#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: s is the string whose length is determined
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		s = s + 1;
		return (1 + _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
}
