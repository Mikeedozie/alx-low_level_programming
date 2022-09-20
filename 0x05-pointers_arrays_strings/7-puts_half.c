#include "main.h"
#include <stdio.h>
#include <string.h>

void puts_half(char *str)
{
	int i, len;
	len = strlen(str);
	int n;
	for (i = 0; i <= len; i++)
	{
		if (len % 2 == 0)
			n = (len) / 2;
		else
			n = (len - 1)/2;
	}
}
