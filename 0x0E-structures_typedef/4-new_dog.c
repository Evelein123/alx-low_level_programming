#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: a pointer to the new dog or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;
	int i, j;
	/* allocate memory for the new dog structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	/* find the length of the name and allocate memory for a copy */
	for (i = 0; name[i] != '\0'; i++)
		;
	name_copy = malloc(sizeof(char) * (i + 1));
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	/* copy the name to the new memory location */
	for (i = 0; name[i] != '\0'; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';
	/* find the length of the owner and allocate memory for a copy */
	for (j = 0; owner[j] != '\0'; j++)
		;
	owner_copy = malloc(sizeof(char) * (j + 1));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	/* copy the owner to the new memory location */
	for (j = 0; owner[j] != '\0'; j++)
		owner_copy[j] = owner[j];
	owner_copy[j] = '\0';
	/* assign the values to the new dog structure */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;
	return (new_dog);
}
