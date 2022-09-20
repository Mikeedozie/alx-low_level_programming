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
	int i, j, l;
	char c;
	l = strlen(s);
	
	for (i = 0, j = l-1; i <= j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	printf("%s", s);
}
