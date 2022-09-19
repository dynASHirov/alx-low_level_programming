#include "main.h"

/**
 **_strcpy - function that copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 *
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest
 */

char *_strcpy(char *dest, char *src)
{
	int u = -1;

	do {
		u++;
		dest[u] = src[u];
	} while (src[u] != '\0');

	return (dest);
}
