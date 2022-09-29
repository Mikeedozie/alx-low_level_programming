#include "main.h"

/**
 * _pow_recursion - This raises x to the power of y
 * @x: original value
 * @y: value to be raised
 * Return: (0)
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
	return (0);
}
