#include <stdio.h>

/**
 * main - This program prints decmial numbers
 * Return: This returns a status code of 0
 */

int main(void)
{
	int digits, start;

	start = 0;
	digits = 10;

	for (start; start < digits; start++)
		printf("%d\n", start);
	return (0);

}
