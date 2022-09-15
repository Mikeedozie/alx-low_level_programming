#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);


void positi8ve_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
	return;
}

#endif /* MAIN_H */
