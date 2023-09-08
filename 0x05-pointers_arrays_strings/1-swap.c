#include "main.h"

/**
  * swap : function that swap the valu of two integers
  *
**/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp; 
}