#include "main.h"
/**
 * _isalpha - to check letter
 *@c: int to use for the argument of the function
 *Return:0
 */
int _isalpha(int c)
{
	if ((c >= 'b' && c <= 'x') || (c >= 'B' && c <= 'X'))
	{
	return (1);
	}
	else
		return (0);
}
