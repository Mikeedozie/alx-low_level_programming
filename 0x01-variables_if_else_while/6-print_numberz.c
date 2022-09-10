#include <stdio.h>

/**
 * main - This code prints numbers, using putchar
 * Return: This returns an exit code 0
 */

int main(void)
{
	int numberz;

	numberz = 0;

	for (; numberz < 10; numberz++)
		putchar(numberz);
	putchar('\n');
	return (0);
}
