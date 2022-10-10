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

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);




#endif
