#include "main.h"

/**
 * print_rev - function that prints a string followed by a new line.
 * @s: an input string
 * Return: 0;
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;

	while (x)
		_putchar(s[--x]);

	_putchar('\n');
}
