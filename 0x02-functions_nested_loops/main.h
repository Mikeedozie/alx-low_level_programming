#include <unistd.h>
#ifndef MAIN_H
#define MAIN_H

/**
 * putchar - This returns the _putchar
 * string
 * Return: returns a string
 */

int put(void)
{
	return (write(1, "_putchar\n", 10));
}

#endif
