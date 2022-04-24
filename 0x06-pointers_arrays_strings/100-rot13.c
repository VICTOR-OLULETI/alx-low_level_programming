#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 * @str: string to be encoded.
 *
 * Return: Always char.
 */

char *rot13(char *str)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (((str[i] >= 'a' && str[i] <= 'z')
			     || (str[i] >= 'A' && str[i] <= 'Z'))
			    && str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
	}
	return (str);
}
