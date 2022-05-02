#include <stdio.h>

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
	int i, mul;

	if (argc == 3)
	{
		mul = argv[1] * argv[2];
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		return (-1);
	}
}

