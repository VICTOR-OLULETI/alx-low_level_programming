#include <stdio.h>

/**
 * main - Prints the alphabet and removes q and e
 *
 *Return: Always 0.
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'q' && letters != 'e')
			putchar(letters);
	}

	putchar('\n');

	return (0);
}
