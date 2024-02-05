#include "main.h"

/**
 * _strlen - a function that return lenght of a string.
 * @s: an input sstring
 * Return: nothing
 */

int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; s[lenght] != '\0'; )
		lenght++;

	return (lenght);
}
