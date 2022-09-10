#include <stdio.h>

/**
 * main - This function reverses the alphabets
 * Return: This returns an exit code of 0
 */

int main(void)
{
	char reverse = 'z';

	for (; reverse <= 'a'; reverse--)
		putchar(reverse);
	putchar('\n');

	return (0);
}
