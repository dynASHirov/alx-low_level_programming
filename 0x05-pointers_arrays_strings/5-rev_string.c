#include "main.h"

/**
 * rev_string - function that reverse a string and add new line
 *
 * @s: an input string
 * Return: 0
 */

void rev_string(char *s)
{
	int len, i, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	half = len / 2;
	for (i = 0; i < half; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
