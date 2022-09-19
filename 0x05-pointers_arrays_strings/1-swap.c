#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: integer pointer
 * @b: integer pointer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
