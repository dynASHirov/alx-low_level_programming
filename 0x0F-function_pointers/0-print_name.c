#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @_name: pointer to name to print
 * @f: function to print name
 * Return: Nothing
 */
void print_name(char *_name, void (*f)(char *_name))
{
	if (_name == NULL || f == NULL)
		return;
	f(_name);
}
