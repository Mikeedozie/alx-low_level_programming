#include "main.h"
#include <stdlib.h>

/**
 * create_array - This returns a pointer to a char
 * holding the size and the values to be stored in
 * the array
 *
 * @size: size of the array
 * 
 * @c: value to be stored in the array
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *char_arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	
	char_arr = (char *)malloc(size * sizeof(int));

	if (char_array == NULL)
		return (NULL);
	else
	{
		for (; i < size; i++)
			*(char_arr + i) = c;
	}
	return (char_arr);
}
