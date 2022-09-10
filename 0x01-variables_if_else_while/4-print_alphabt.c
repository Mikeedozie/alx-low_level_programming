#include <stdio.h>

/**
 * main - This function doesn't print some alphabets
 * Return:This returns exit code of 0
 */

int main(void)
{
	int letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'q' && letters != 'e')
			putchar(letters);
	}
	putchar('\n');
	return (0);
}
