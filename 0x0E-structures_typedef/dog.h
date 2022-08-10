#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structer of dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * dog_t - typedef
 *
 * Description: this structure is about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
