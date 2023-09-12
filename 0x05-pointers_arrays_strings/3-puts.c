#include "main.h"

/**
 * _puts - a function that prints a string followed by a new line.
 * @str : a pointer to a string
 * return : nothing
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
