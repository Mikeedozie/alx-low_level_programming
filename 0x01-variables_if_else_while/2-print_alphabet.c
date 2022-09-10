#include <stdio.h>

/**
 * main - this is where the code begins
 * Return: This returns an exit code of 0
 */

int main(void)
{
	char *letters;

	for (letters = "a"; letters <= "z"; letters++)
		putchar(letters);
	return (0);
}
