#include "main.h"

/**
 * swap_int - This function will swap the values of two
 * integers in the main.c file given by ALX
 * @a: This is the first pointer value
 * @b: This is the second pointer value
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
