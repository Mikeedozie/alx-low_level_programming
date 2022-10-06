#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory
 * @nmemb: no of block to allocate
 *
 * @size: size of the blocks
 *
 * Return: Pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int count;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);

	if (str == NULL)
		return (str);

	for (count = 0; count < str[count]; count++)
	{
		str[count] = 0;
	}

	return (str);
}
