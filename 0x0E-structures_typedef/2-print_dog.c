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
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Name: %s\n", d->owner);
}
