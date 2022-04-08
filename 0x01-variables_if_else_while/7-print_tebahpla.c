#include <stdio.h>

/**
 * main - print the lower case alphabet in reverse
 *
 *Return: Always 0.
 */

int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
		putchar(letters);

	putchar('\n');

	return (0);
}
