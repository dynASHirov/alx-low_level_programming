#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: input string
 *
 *Return: The integer
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int val = 0;

	do {

		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			val = (val * 10) + (*s - '0');

		else if (val > 0)
			break;
	} while (*s++);

	return (val * sign);
}
