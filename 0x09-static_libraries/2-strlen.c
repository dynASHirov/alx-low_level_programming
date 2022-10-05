#include "main.h"

/**
 * _strlen - function to checks the length of a string
 * @s: input  check
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int lgth = 0;

	while (s[lgth])
		lgth++;
	return (lgth);
}
