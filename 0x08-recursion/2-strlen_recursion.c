#include "main.h"

/**
 * _strlen_recursion - Returns the factorial of a given.
 * @s: String to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}

	return (lenght);
}
