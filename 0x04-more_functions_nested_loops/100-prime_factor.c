#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned int long num = 612852475143, count = (int) sqrt(num);

	for (num = 612852475143; num >= 1; num--)
	{
		for ( i = count; i >= 2; count--)
		{
			if (num % count == 0)
			{
				printf("%lu \n", num);
				break;
			}
		}
	}
	return (0);
}
