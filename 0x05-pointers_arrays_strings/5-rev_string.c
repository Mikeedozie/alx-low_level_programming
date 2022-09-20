#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * rev_string - check the code
 * @s: String value to be evaluated
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, l, j;
	char c;

	l = strlen(s);

	for (i = 0, j = l - 1; i <= j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
