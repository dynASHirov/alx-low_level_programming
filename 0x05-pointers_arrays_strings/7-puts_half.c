#include "main.h"

/**
 * puts_half - funnction to print second half of the string.
 * @str: input string
 * Return: 0
 */


void puts_half(char *str)
{
	int len, i, half;

	for (len = 0; str[len] != '\0'; len++)
	{}
	half = len / 2;

	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
