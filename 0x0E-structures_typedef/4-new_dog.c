#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	int i = 0, j = 0;

	for (; name[i] != '\0'; i++)
		;

	for (; owner[j] != '\0'; j++)
		;


	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);


	my_dog->name = malloc(sizeof(char) * (i + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (j + 1));

	if (my_dog->owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		return (NULL);
	}

	strcpy((*my_dog).name, name);
	strcpy((*my_dog).owner, owner);
	my_dog->age = age;

	return (my_dog);
}
