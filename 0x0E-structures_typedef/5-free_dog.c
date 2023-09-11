#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog structure
 * @d: a pointer to the dog structure to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL) /* check if d is valid */
		return;
	free(d->name); /* free the name copy */
	free(d->owner); /* free the owner copy */
	free(d); /* free the dog structure */
}
