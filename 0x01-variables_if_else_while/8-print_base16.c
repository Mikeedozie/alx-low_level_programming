#include <stdio.h>

/**
 * main - This code prints decimal and,
 * hex values
 * Return: Always Success(0)
 */

int main(void)
{
	int num = 0;
	char letter = 'a';

	for (; num <= 9; num++)
		putchar('0' + num);
	for (; letter <= 'f' letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
