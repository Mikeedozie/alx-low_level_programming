#include "main.h"

/**
 * positive_or_negative  - This is where the whole
 * process begins
 * Return: This returns an exit code of 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		return ("%d is positive\n", i);
	else if (i == 0)
		return ("%d is zero\n", i);
	else
		return ("%d is negative\n", i);
	return (0);
}
