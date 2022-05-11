#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - determines the length of string
 * @str: character string
 *
 * Return: returns an int
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * _strcpy - copies the second string into the first
 * @str1: first string
 * @str2: second string
 * Return: return char
 */

char *_strcpy(char *str1, char *str2)
{
	int a = 0;

	while (str2[a] != '\0')
	{
		str1[a] = str2[a];
		a++;
	}

	str1[a] = '\0';
	return (str1);
}

/**
 * *new_dog - function that creates a new dog
 * @name: character string
 * @age: float
 * @owner: character string
 * Return: return pointer or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name, len_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	len_name = _strlen(name);
	new_dog->name = malloc(sizeof(char) * len_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	len_owner = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * len_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
