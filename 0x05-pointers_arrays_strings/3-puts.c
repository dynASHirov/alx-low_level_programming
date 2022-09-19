#include "main.h""

/**
 * _puts - function that prints a string, and add a new line
 * @str: input string to print
 *
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
