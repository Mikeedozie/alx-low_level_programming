#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This creates a dog structure
 *
 * @name: Name of dog
 *
 * @age: Dogs age
 *
 * @owner: Owner of dog
 *
 * Return: Nothing
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
