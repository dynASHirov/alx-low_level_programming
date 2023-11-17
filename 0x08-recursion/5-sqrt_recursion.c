#include "main.h"
int _sqrt(int pre, int roo);

/**
 * _sqrt_recursion - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - find square root
 * @pre: previous value
 * @roo: square root value
 * Return: the square root
 */
int _sqrt(int pre, int roo)
{
	if (pre > roo)
		return (-1);
	else if (pre * pre == roo)
		return (pre);
	return (_sqrt(pre + 1, roo));
}
