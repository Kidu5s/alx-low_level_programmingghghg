#include "dog.h"
#include <stdio.h>

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
	char *name = "Ghost";
	char *owner = "Jon Snow";
	dog_t *my_dog;

	my_dog = new_dog(name, 4.75, owner);
	if (my_dog == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	printf("My name is %s, I am %.2f, and my owner is %s\n", my_dog->name, my_dog->age, my_dog->owner);
	return (0);
}
