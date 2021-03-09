#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory of dogs
 * @d: pointer
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d);
		free(d->owner);
	}
}
