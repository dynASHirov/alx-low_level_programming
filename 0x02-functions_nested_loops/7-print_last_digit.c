#include "main.h"
/**
 *print_last_digit - Prints the last digit of a number.
 *@s: An integer input
 *
 *Return: last digits of s
 */
int print_last_digit(int s)
{
	s = s % 10;

	if (s < 0)
	{
		s = s * -1;
	}

	_putchar('0' + s);
	return (s);
}
