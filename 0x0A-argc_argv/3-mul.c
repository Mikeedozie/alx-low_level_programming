#include <stdio.h>
#include <stdlib.h>

/**
 * main - This returns the name of the program
 * @argc: Argument count
 * @argv: Argument Vector
 * Return: (0).
 */


int main(int argc, char *argv[])
{
	int init = 1, sum = 1;

	for (; init < argc; init++)
	{
		if (argc < 2)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum *= atoi(argv[init]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
