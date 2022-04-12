#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	i = 0;
	if (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		i++;
		_putchar('\n');
	}

}
