#include "main.h"

/**
 * *infinite_add - function that adds two numbers.
 *
 * @n1: n1 is the first number
 * @n2: n2 is the second number
 * @r: r is the result of the add
 * @size_r: is the size of the r
 * Return: Always char
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;

	for (i = 0; n1[i] != '\0' || n2[i] != '\0'; i++)
	{
		if (i <= size_r)
		{
			r[i] = n1[i] + n2[i];
		}
		else
		{
			return (0);
			break;
		}
	}
	return (r);
}
