#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc - number of arguments at the command line
 * @argv - the array of pointers
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
