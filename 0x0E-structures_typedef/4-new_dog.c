#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates another dog
 *
 * @name: Dogs name
 *
 * @age: Dogs age
 *
 * @owner: Dog owner
 *
 * Return: Dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
		free(my_dog);
	}	
	(*my_dog).name = name;
	(*my_dog).owner = owner;
	my_dog->age = age;

	return (my_dog);
}
