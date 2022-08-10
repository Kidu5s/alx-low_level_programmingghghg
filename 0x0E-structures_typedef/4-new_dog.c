#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

char *_strcpy(char *str);

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
	char *cpy_name;
	char *cpy_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	cpy_owner = _strcpy(owner);
	if (cpy_owner == NULL)
	{
		free(d);
		return (NULL);
	}
	cpy_name = _strcpy(name);
	if (cpy_name == NULL)
	{
		free(cpy_owner);
		free(d);
		return (NULL);
	}
	d->name = cpy_name;
	d->age = age;
	d->owner = cpy_owner;

	return (d);
}

/**
 * _strcpy - copy the string
 * @str: the string
 *
 * Return: a pointer to the string
 */
char *_strcpy(char *str)
{
	int len;
	int i;
	char *ptr;

	for (len = 0; str[len]; len++)
	{
	}

	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
