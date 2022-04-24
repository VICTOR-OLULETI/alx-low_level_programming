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
	int i;
	char let[] = "aeotl";
	char let2[] = "AEOTL";
	char num[] = "43071";

	for(i = 0; str[i] != '\0'; i++)
	{
	       	for (k = 0, let[k] != '\0'; k++)
		{
			if (str[i] == let2[k] || str[i] == let[k])
			{
				str[i] = num[k];
			}
		}
	}
	return (str);
}
