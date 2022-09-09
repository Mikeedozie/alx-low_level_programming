#include <stdio.h>

int main(void)
{
	int a;
	char b;
	long c;
	long long d;
	float e;
	
	printf("Size of a char: %d byte(s)", sizeof(b));
	printf("Size of an int: %d byte(s)", sizeof(a));
	printf("Size of a long int: %d byte(s)", sizeof(c));
	printf("Size of a long long int: %d byte(s)", sizeof(d));
	printf("Size of a float: %d byte(s)", sizeof(e));
	return (0);
}
