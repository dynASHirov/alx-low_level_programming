#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str, *starts1, *starts2;
	int i = 0, lensA = 0, lensB = 0;

	starts1 = s1;
	starts2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		lensA++;
		s1++;
	}
	s1 = starts1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		lensB++;
		s2++;
	}
	s2 = starts2;
	new_str = malloc(sizeof(char) * (lensA + lensB + 1));
	starts1 = new_str;
	if (new_str == NULL)
		return (NULL);
	for (; i < (lensA + lensB); i++)
	{
		if (i < lensA)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (starts1);
}
