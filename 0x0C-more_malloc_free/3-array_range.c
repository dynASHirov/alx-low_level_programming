#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: min number to start
 * @max: max number to start
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *new_array;
	int di, i;

	if (min > max)
		return (NULL);

	di = max - min;
	new_array = malloc((di + 1) * sizeof(int));
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i <= di; i++)
		new_array[i] = min++;

	return (new_array);
}
