#include "main.h"

/**
 * factorial - The factorial of a given number.
 * @a: The number to find the factorial of.
 *
 * Return: If a > 0 - the factorial of n.
 *         If a < 0 - 1 to indicate an error.
 */
int factorial(int a)
{
	int result = a;

	if (a < 0)
		return (-1);

	else if (a >= 0 && a <= 1)
		return (1);

	result *= factorial(a - 1);

	return (result);
}
