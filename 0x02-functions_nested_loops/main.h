#include <stdio.h>
#ifndef MAIN_H
#define MAIN_H

/**
 * putchar - This returns the _putchar
 * string
 * Return: returns a string
 */

int putchar(void)
{
	return (write(1, "_putchar\n", 10));
}

#endif
