#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free instance of struct dog
 * @d: instance to free
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	free(d);
}
