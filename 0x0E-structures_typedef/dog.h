#ifndef DOG_H
#define DOG_H

/**
 * sturct dog - a structer of dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
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
/**
 * struct dog - a strct of dog
 * dog_t - typedef
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owenr);
void free_dog(dog_t *d);

#endif
