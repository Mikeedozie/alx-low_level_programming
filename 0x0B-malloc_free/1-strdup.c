#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Takes in a string and duplicates it
 *
 * @str: string to duplicate
 * Return: pointer to char.
 */

char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (; i <= str[i]; i++)
		;

	ptr = (char *)malloc(i * sizeof(char));

	for (; j <= i; j++)
		*(ptr + j) = str[j];

	return (ptr);
}
