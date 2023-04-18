#include <stdio.h>

/**
*main- prints the largest prime factor
*of a number
*
*Return: returns 0
*/

int main(void)
{
long a = 612852475143;
long int b, d;

	for (b = 2; b <= a; b++)
	{
	d = a / b;
	if (d)
	{
		if (a % b == 0)
		{
			if (b == a)
			{
			printf("%lu", b);
			}
			a = d;
			b = 1;
		}
	}
	}
	printf("\n");
	return (0);
}
