#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: the memory address of the dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL || d->owner == NULL)
		printf("(nil)\n");
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d == NULL)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
