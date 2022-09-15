#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - Void type
 * Return: No return for void type
 * @i: This is the integer value
 */

void positive_or_negative(int i);


void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}

#endif /* MAIN_H */
