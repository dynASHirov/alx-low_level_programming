#include "main.h"

/**
 * puts_half - funnction to print second half of the string.
 * @str: input string
 * Return: 0
 */


void puts_half(char *str)
{
	int len, i = 0, half;

	for (len = 0; str[len] != '\0'; len++)
	{}
	half = len / 2;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= half && i < len)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
