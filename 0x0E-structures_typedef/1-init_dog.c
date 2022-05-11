#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer
 * @name: character string
 * @age: float
 * @owner: character string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (1);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
