#include "main.h"

/**
* leet - function that encodes a string into 1337.
* @s: an input string to encode
* Return: An encode string
*/
char *leet(char *s)
{
	int b = 0, x;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[b])
	{
		for (x = 0; x < 10; x++)
			if (s[b] == str[x])
				s[b] = subs[x];

		b++;
	}

	return (s);
}
