#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 *
 * @s: the string entered
 *
 * Return: Always char.
 */

char *cap_string(char *s)
{
	int i, k;
	int capital;
	char sep[] = ",;. !?\"(){}\t;\n;";


	for (i = 0; s[i] != '\0'; i++)
	{
		capital = 0;

		if (i == 0)
		{
			capital = 1;
		}
		else
		{

			for (k = 0; sep[k] != '\0'; k++)
			{
				if (s[i - 1] == sep[k])
				{
					capital = 1;
					break;
				}
			}
		}

		if (capital == 1)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
	}

	return (s);
}
