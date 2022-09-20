#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * print_rev - This prints the reverse of a given string
 * @s: This is the string to be reversed
 * Return: Void
 */

void print_rev(char *s)
{
	printf("%s\n", strrev(s));
}
