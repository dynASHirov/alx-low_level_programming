#include "main.h"
/**
 *print_alphabet_x10 - function to print abc times
 *
 *Return:0
 */
void print_alphabet_x10(void)
{
	char c, i;

	for (y = 0; y <= 9; y++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
