#include <stdio.h>

/**
 * main - Start of the code
 * Return: This ends the code
 */

int main(void)
{
	int small, capital;

	for (small = 'a'; small <= 'z'; small++)
		putchar(small);
	for (capital = 'A'; capital <= 'Z'; capital++)
		putchar(capital);
	putchar('\n');
	return (0);
}
