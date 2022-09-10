#include <stdio.h>

/**
 * main - This program prints decmial numbers
 * Return: This returns a status code of 0
 */

int main(void)
{
	int digits, start;

	digits = 10;

	for (start = 0; start < digits; start++)
		printf("%d", start);
		printf("\n");
	return (0);

}
