#include "dog.h"

char *_strcpy(char *str);
/**
 * new_dog: a struct of dog that creats new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: NULL if function fails
 * a pointer to new dog if success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpy_name;
	char *cpy_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	cpy_owner = _strcpy(owner);
	if (cpy_owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	cpy_name = _strcpy(name);
	if (cpy_owner == NULL)
	{
		free(new_dog);
		free(cpy_owner);
		return (NULL);
	}
	
	new_dog->name = cpy_name;
	new_dog->age = age;
	new_dog->owner = cpy_owner;
	return (new_dog);
}

/**
 * _strcpy - copies string
 * @str: the string to be copied
 * 
 * Return: a pointer to the copied string
 */
char *_strcpy(char *str)
{
	int len;
	int i;
	char *ptr;

	for (len = 0; str[len]; len++)
		;
	len++;
	ptr = malloc(sizeof(char) * len);
	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
