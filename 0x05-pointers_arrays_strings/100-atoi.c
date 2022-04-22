#include "main.h"

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
	i = 0;
	len = 0;
	while (s[len])
	{
		if (s[len] == '-')
		{
			sign *= - 1;

		}

		while (s[len] >= '0'  && s[len] <= '9')
		{
			i = 1;
			num = num * 10 + (s[len] -'0');
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
