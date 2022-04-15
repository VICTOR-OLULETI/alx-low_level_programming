#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 *
 * Return: Always 0.
 */

int main(void)
{
	int long num = 612852475143;
	double count = sqrt(num);

	for (num = 612852475143; num >= 1; num--)
	{
		for ( i = count; i >= 2; count--)
		{
			if (num % count == 0)
			{
				printf("%ld\n", num / count);
			}
		}
	}
	return (0);
}
