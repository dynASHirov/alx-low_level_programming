#include "main.h"

/**
 * swap_int - function that swap the valu of two integers
 * @a : an integer input pointer.
 * @b : an integer input pointer.
 * return : always 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
