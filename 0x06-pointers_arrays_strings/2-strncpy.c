#include "main.h"

/**
 * _strcmp -function tha Compares pointers to two strings.
 * @s1: input string to be compared.
 * @s2: input string to be compared.
 *
 * Return: The difference.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
