#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: s is the string to be converted to an integer
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int len;
	int num;

	if (s[0] = '-')
	{
		s[0] = '0';
		printf("-");
	}
	if (s[0] = '+')
	{
		s[0] = '0';
		printf("+");
	}

	for (len = 0; s[len] != '\0'; len++)
	{
		if (s[len] >= '0' && s[len] <= '9')
		{
			num = num * 10 + (int (s[len]) - 48);
		}
		else
		{
			num = 0;
			break;
		}
	}
}
