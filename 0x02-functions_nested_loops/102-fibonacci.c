#include "main.h"
#include <stdio.h>

/**
 * main - fibonnaci sequence for the first 50 numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;
	unsigned long fib1 = 0, fib2 = 1, sum;
	for ( i = 0; i < 50; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

	        fib1 = fib2;
		fib2 = sum;

		if (i == 49)
		{
			printf("\n");
		}
		else
			printf(", ");

	}
	return (0);
}
