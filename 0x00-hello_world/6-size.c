#include <stdio.h>

/**
 * main - This code calculates the sizes of of different variables
 * Return: This ends the code.
 */
int main(void)
{
	int a;
	char b;
	long c;
	long long d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(b));
	printf("Size of an int: %d byte(s)\n", sizeof(a));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}
