#include "main.h"

/**
 * print_rev - function that prints a string followed by a new line.
 * @s: an input string
 * Return: 0;
 */

void print_rev(char *s)
{
int len = 0;

for (len = 0; s[len] != '\0'; len++)
{}
while (len)
{
	--len;
	_putchar(s[len]);

}
	_putchar('\n');
}
