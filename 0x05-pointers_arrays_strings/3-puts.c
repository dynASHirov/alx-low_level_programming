#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string followed by a new line.
 * @str : a pointer to a string
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		putchar(str[len]);
		len++;
	}
}
