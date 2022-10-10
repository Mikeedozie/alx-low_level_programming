#include "dog.h"

/**
 * init_dog - initialize dog object using pointers
 *
 * @d: variable for dog
 *
 * @name: Name
 *
 * @age: Age
 *
 * @owner: Owner
 *
 * Return: d
 */



void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
