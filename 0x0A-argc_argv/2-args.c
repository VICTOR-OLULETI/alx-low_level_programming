#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: argc is the number of arguments
 * @argv: argv is the array
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
