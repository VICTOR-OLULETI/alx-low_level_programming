#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc - number of arguments at the command line
 * @argv - the array of pointers
 * Return: Always 0.
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
