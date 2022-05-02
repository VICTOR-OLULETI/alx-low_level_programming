#include <stdio.h>

/**
 * main - function that prints the number of arguments
 *
 * @argc: argc is the number of arguments
 * @argv: argv is the array of pointers
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
