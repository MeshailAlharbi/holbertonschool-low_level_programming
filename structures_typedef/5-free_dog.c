#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog_t structure
 * @d: pointer to dog_t structure to free
 *
 * Description: Frees name, owner, and the dog_t structure itself
 * if d is not NULL.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
