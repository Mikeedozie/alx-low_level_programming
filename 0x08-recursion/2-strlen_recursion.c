#include "main.h"

/**
 * _strlen_recursion - This counts the string
 * @s: String to be counted
 * Return: Value of counted String.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
