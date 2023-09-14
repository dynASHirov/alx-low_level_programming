#include "main.h"

/**
 * print_rev - function that prints a string followed by a new line.
 * @s: an input string
 * Return: 0;
 */

void print_rev(char *s)
{
int len = 0;
	char st[] = "I do not fear computers. I fear the lack of them - Isaac Asimov";
for (len = 0; st[len] != '\0'; len++)
{}
while (len)
{
	--len;
	_putchar(st[len]);

}
	_putchar('\n');
}
