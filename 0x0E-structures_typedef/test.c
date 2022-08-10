#include "dog.h"
#include <stdlib.h>
char *_strcpy(char *src);
/**
 * new_dog - Creates a new instance of a struct
 * @name: A string representing the name of a dog
 * @age: An integer representing then age of a dog
 * @owner: A string representing the name of a dog owner
 * Return: A pointer to dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *d;
        char *d_name;
        char *d_owner;

        d = malloc(sizeof(dog_t));
        if (d == NULL)
                return (NULL);
        d_owner = _strcpy(owner);
        if (d_owner == NULL)
        {
                free(d);
                return (NULL);
        }
        d_name = _strcpy(name);
        if (d_name == NULL)
        {
                free(d_owner);
                free(d);
                return (NULL);
        }
        d->name = d_name;
        d->age = age;
        d->owner = d_owner;
        return (d);
}

/**
 * _strcpy - create a copy of a string
 * @src: Contains the original string
 * Return: Gives back the copy of string
 */
char *_strcpy(char *src)
{
        int i;
        int len;
        char *dest;
	
	for (len = 0; src[len]; len++)
		;
        dest = malloc(sizeof(char) * len + 1);
        if (dest == NULL)
                return (NULL);

        for (i = 0; src[i] != '\0'; i++)
                dest[i] = src[i];
        dest[i] = '\0';
        return (dest);
}
