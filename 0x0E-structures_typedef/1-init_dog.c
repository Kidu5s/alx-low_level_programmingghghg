#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initalize the struct dog
 * @d: the struct that holds the memory address
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
