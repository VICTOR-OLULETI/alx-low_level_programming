#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from argument supplied to 98
 *
 * @n: n is the interger number the counting starts from
 * Return : returns the numbers from n to 98 followed by comma and space
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
}
