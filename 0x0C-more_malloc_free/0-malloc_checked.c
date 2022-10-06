#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This allocates a memory from heap
 * @b: integer to be checked
 * Return: exit (98) on failure
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
