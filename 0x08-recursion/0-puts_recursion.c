#include "main.h"

/**
 * _puts_recursion - A string and a new line.
 * @a: String to be printed.
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
