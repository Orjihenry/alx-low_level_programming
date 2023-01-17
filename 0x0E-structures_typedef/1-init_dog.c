#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Function that initializes a variable of type struct dog.
 *
 * @d: Parameter to be initialized
 * @name: Name parameter to be initialized
 * @age: Age parameter to be initialized
 * @owner: Owner parameter to be initialized
 *
 * Return: Success 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
