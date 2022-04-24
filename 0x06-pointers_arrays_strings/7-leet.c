#include "main.h"

/**
 * *leet - function that encodes a string
 *
 * @str: string entered
 *
 * Return: Always char.
 */

char *leet(char *str)
{
	int i, k;
	char s1[] = "aeotl";
	char s2[] = "AEOTL";
	char num1[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; k < 5; k++)
		{
			if (str[i] == s1[k] || str[i] == s2[k])
			{
				str[i] = num1[k];
			}
		}
	}

	return (str);
}
