#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - This concatenates a string to
 * a particular length
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: number of string 2 to copy
 *
 * Return: Pointer to copied string
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, j, x, y, z, total;
	char *ptr;



	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n == j)
		n = j;

	total = i + n + 1;

	ptr = malloc(sizeof(char) * total);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
	{
		ptr[x] = s1[x];
	}

	for (y = 0; ptr[y] != '\0'; y++)
		;
	for (z = 0; z <= n; z++)
	{
		ptr[y + z] = s2[z];
	}

	return (ptr);
}
