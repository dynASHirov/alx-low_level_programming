#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int heigt_index, width_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (heigt_index = 0; heigt_index < height; heigt_index++)
	{
		twoD[heigt_index] = malloc(sizeof(int) * width);

		if (twoD[heigt_index] == NULL)
		{
			for (; heigt_index >= 0; heigt_index--)
				free(twoD[heigt_index]);

			free(twoD);
			return (NULL);
		}
	}

	for (heigt_index = 0; heigt_index < height; heigt_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			twoD[heigt_index][width_index] = 0;
	}

	return (twoD);
}
