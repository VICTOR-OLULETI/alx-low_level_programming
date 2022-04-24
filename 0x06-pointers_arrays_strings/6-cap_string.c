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
	char sep[] = ",;. !?\"(){}\t;\n;";

	s[0] = s[0] - 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			for (k = 0; sep[k] != '\0'; k++)
			{
				if (s[i - 1] == sep[k])
				{
					s[i] = s[i] - 32;
				}
			}
		}
	}
	return (s);
}
