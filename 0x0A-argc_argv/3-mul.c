#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argc is the number of arguments
 * @argv: argv is the array
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int mul = 1;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

