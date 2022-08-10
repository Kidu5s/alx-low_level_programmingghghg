#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a fuction that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the ownere of the dog
 *
 * Return: NULL if fuction fails
 * otherwise return a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
