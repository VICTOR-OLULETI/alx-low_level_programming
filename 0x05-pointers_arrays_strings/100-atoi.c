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
	int len, sign, i;
	unsigned int num = 0;

	sign = 1;
	len = 0;
	while (s[len])
	{
		if (s[len] == 45)
		{
			sign *= -1;

		}

		while (s[len] >= 48  && s[len] <= 57)
		{
			i = 1;
			num = num * 10 + (s[i] -'0');
			len++;

		}
		if (i == 1)
		{
			break;
		}
		len++;
	}

	num *= sign;

	return (num);
}
