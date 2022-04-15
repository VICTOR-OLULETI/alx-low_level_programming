#include "main.h"
#include <stdio.h>
#include <math.h>>

/**
 * main - finds and prints the largest prime factor
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned int long num = 612852475143;
	unsigned int long count = sqrt(num);

	while (1)
	{
		if (num % count == 0)
		{
			printf("%lu\n", num / count);
			break;
		}
		count--;
	}
	return (0);
}
