#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print qualities of a dog
 *
 * @d: dog object
 *
 * Return: 0
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nothing");
	if (!(d->name))
		d->name = "(nil)";
	if (!(d->owner))
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Name: %s\n", d->owner);
}
