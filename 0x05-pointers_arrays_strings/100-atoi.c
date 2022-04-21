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
	int len, num, neg;

	num = 0;
	neg = s[0] == '-';
	len = neg ? 1 : 0;
	while (s[len] >= '0' && s[len] <= '9')
       	{
		num = num * 10 + (s[len] -'0');
	       	len++;
       	}
	if (neg)
		num *= -1;
	return (num);
}
