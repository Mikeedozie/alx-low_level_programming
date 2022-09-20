#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - This checks for even numbers in the given
 * string
 * @str: This is the character to check
 * Return: Void
 */

void puts2(char *str)
{
	int l;
	int i =0;
	l = strlen(str);

	for (i=0; i < l; i++)
		if (str[i] % 2 == 0)
			printf("%s", str);
	printf("\n");
}
