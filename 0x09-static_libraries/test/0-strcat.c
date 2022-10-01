#include "main.h"
#include <stdio.h>

/**
 * _strcat - This function concatenates two strings
 * @dest: parameter 1
 * @src: parameter 2
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);

}
