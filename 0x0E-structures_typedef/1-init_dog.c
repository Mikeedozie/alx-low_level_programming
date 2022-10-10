#include "dog.h"
#include <stdlib.h>

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
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
