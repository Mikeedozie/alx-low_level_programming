#include "main.h"
<<<<<<< HEAD

/**
 * _strcat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 *
 * Return: char value
=======
#include <stdio.h>

/**
 * _strcat - This function concatenates two strings
 * @dest: parameter 1
 * @src: parameter 2
 * Return: 0
>>>>>>> c02c9838204d126dec97ed1243fc3a4d65979b2c
 */

char *_strcat(char *dest, char *src)
{
<<<<<<< HEAD
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

=======
	printf("%s%s", dest, src);
	return (0);
>>>>>>> c02c9838204d126dec97ed1243fc3a4d65979b2c
}
