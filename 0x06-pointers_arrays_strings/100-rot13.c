#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 * @str: string to be encoded.
 *
 * Return: Always char.
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
		    || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 13;
		}
	}
	return (str);
}
