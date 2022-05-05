#include "main.h"
#include "stdlib.h"

/**
 * str_count - counts
 * @str: string character
 *
 * Return: Always int;
 */
int str_count(char *str)
{
	int i = 0, count = 0;

	while (*(str + i))
	{
		if (*(str + i) != ' ')
		{
			if (*(str + i + 1) == ' ' || *(str + i + 1) == 0)
			{
				count += 1;
			}
		}
		i++;
	}
	return (count);
}

/**
 * str_len - length 
 * @str: string character
 *
 * Return: Always int.
 */
int str_len(char *str)
{
	int len = 0;
	while (*str == ' ' && *str)
		str++;
	len = 0;
	while (*(str + len) != ' ' && *(str + len))
		len += 1;
	return (len);
}

/**
 * *strtow - char
 * @str: pointer to string params
 * Return: char
 */

char **strtow(char *str)
{
	int i = 0, j = 0, k= 0;
	int len = 0, count = 0;
	char **f, *col;

	if (!str || !*str)
		return (NULL);
	count = str_count(str);
	if (count == 0)
		return (NULL);
	count++;
	f = malloc(sizeof(char *) * count);
	if (!f)
		return (NULL);
	while (*str)
	{
		len = str_len(s);
		len++;
		col = malloc(sizeof(char) * len);
		if (!col)
		{
			for (k = j - 1; k >= 0; k--)
				free(f[k]);
			free(f);
			return (NULL);
		}
		for (k = 0; k < (len - 1); k++)
			*(col + k) = *(str++);
		*(col + k) = '\0';
		*(f + j) = col;
		if (j < count - 1)
			j++;
	}
		*(f + j) = NULL;
		return (f);
}

