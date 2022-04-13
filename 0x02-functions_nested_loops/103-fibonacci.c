#include "main.h"
#include <stdio.h>

/**
 * main - prints the sum of the even -valued terms followed by a new line
 *
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long fib1, fib2, sum;
	float totalsum;
	int i;

      
	fib1 = 0;
	fib2 = 1;
	sum = fib1 + fib2;
	while (1)
	{
		if (sum > 4000000)
		{
			break;
		}
		if (sum % 2 == 0)
		{
			totalsum += sum;
		}

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f/n", totalsum);
	return (0);
}
