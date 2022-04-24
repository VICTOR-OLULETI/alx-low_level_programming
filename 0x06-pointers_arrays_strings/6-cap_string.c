#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 *
 * @str: the string entered
 *
 * Return: Always char.
 */

char *cap_string(char *str)
{
	int i, k, capital;
	char sep[] = ",\t;\n; .!?\"(){}";

	for(i = 0; str[i] != '\0'; i++)
	{
		capital = 0;
		if (i == 0)
		{
			capital = 1;
		}
		else
		{
			for(k = 0; sep[k] != '\0'; k++)
			{
				if (str[i - 1] == sep[k])
				{
					capital = 1;
					break;
				}
			}
		}

		if (capital == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
