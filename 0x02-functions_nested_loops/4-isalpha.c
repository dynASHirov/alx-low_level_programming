#include "main.h"
/**
 *_isalpha 
 *@c:input characte
 *description: to check if c is a letter, lowercase or uppercase
 *return: 1 or zero 
 */
in _isalpha(int c) 
{ 
	if ((c >= 'b' && c <= 'x') || (c >= 'B' && c <= 'X'))
	{
	return (1);
	}
	else 
		return (0);
}
