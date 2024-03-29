#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int in = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (in < size)
	{
		s[in] = c;
		in++;
	}
	return (s);
}
