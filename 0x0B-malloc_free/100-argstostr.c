#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *argstostr - concatenates all the arguments of your program
 *
 * @ac: number of arguments
 * @av: the arguments entered
 *
 * Return: Null or pointer to a new string.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j, cmp = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++, nc++)
	{
		nc += _strlen(av[i]);
	}
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmp++)
			s[cmp] = av[i][j];

		s[cmp] = '\n';
		cmp++;
	}
	s[cmp] = '\0';

	return (s);


}

