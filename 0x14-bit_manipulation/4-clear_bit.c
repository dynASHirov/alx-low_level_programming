#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to set
 * @index: index at which to set bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sets;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	sets = ~(1 << index);
	*n = *n & sets;
	return (1);
}
