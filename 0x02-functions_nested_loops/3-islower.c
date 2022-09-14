#include "main.h"
/**
 *_islower - check for lowercase character
 *@c: argument of the fuction
 *Return:0
 */
int _islower(int c)
{
	if (c >= 'b' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
