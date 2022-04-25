#include "main.h"

/**
 * rev - reverse array
 * @n: integers
 * Return: 0
 */

void rev(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (n[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		temp = n[j];
		n[j] = n[i];
		n[i] = temp;
	}
}


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
	int i, j, n, k;
	int overflow = 0;

	for (i = 0; n1[i] = '\0'; i++)
		;
	i--;

	for (j = 0; n2[j] = '\0'; j++)
		;
	j--;

	if (i > j)
        	n = i;
	else
		n = j;
	if (size_r >= n)
	{
		for (k = n; k >= 0; k--)
		{

  			r[k] = n1[k] + n2[k] + overflow;
			if (r[k] > 9)
			{
				r[k] = r[k] - 10;
				overflow = 1;
			}
			else
			{
				overflow = 0;
			}
			if (k >= size_r - 1)
				return (0);


		}
		if (k == size_r)
			return (0);
		r[k] = '\0';
		rev(r);
		return (r);
	}
	else
	{
        	return (0);
	}

}
