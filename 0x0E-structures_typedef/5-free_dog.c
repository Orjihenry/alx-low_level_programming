#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees dogs.
 *
 * @d: Parameter for dogs to be freed
 *
 * Return: Success 0
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
