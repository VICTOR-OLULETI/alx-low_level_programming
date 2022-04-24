#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 *
 * @str: string to be encoded
 *
 * Return: Always char.
 */

char *leet(char *str)
{
	int i, k;
	char s[] = "aeotl";
	char s2[] = "AEOTL";
	char num[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
	       	for (k = 0, k < 5; k++)
		{
			if ((str[i] == s[k]) || (str[i] == s2[k]))
			{
				str[i] = num[k];
				break;
			}
		}
	}
	return (str);
}
