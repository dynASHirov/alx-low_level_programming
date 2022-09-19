#include "holberton.h"

/**
 * rev_string - function that reverse a string and add new line
 *
 * @s: an input string
 * Return: 0
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
