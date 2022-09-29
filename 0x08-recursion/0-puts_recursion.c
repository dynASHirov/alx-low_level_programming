#include "main.h"

/**
 * _puts_recursion - a string and a new line.
 * @s: string.
 */
void _puts_recursion(char *a)
{
	if (*a)
	{
		_putchar(*a);
		_puts_recursion(a + 1);
	}

	else
		_putchar('\n');
}
