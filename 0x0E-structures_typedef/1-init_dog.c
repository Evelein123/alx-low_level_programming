/* File: 1-init_dog.c */
#include "dog.h"


/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This function initializes a variable of type struct dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
