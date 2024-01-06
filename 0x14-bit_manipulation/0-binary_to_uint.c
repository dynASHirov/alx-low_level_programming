#include "main.h"

/**
 * binary_to_uint - A finction that converts binary number
 * to an unsigned integer
 * @b: A pointer to binary string
 * Return: unsigned integer converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, result = 0, lent = 0;

	if (b == NULL)
		return (0);

	while (b[lent])
		lent++;

	while (lent)
	{
		if (b[lent - 1] != '0' && b[lent - 1] != '1')
			return (0);

		if (b[lent - 1] == '1')
			result += base;
		base *= 2;
		lent--;
	}
	return (result);
}
