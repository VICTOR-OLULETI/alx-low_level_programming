#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the minimum number of coins to make change
 *
 * @argc: argc is the number arguments
 * @argv: argv is the character string
 *
 * Return: Always 0 or 1.
 */

int main(int argc, char *argv[])
{
	int cent = 0, num;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[0]);
	if (num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (num % 25 >= 0)
	{
		cent += num / 25;
		num = num % 25;
	}
	if (num % 10 >= 0)
	{
		cent += num / 10;
		num = num % 10;
	}
	if (num % 5 >= 0)
	{
		cent += num / 5;
		num = num % 5;
	}
	if (num % 2 >= 0)
	{
		cent += num / 2;
		num = num % 2;
	}
	if (num % 1 >= 0)
	{
		cent += num;
	}
	printf("%d\n", cent);
	return (0);
}

