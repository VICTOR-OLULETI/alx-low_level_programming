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
	int i;
	char sep[] = ",;. !?\"(){}\t;\n;";

	for (i = 0; s[i] != '\0'; i++)
	{
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			s[0] = s[0] - 32;
			for (k = 0; sep[k] != '\0'; k++)
			{
				if (s[i] == sep[k])
				{
					i++;
					s[i] = s[i] - 32;
				}
			}
		}
	}
	return (s);
}
