#include <stdio.h>

/**
 * main - Entry point
 * return: - 0(succes).
 */

int main(void)
{
	long int a = 0;
	long int b = 1;
	int c;
	long int z = 0;
	long int y;

	for (c = 0; c < 50; c++)
	{
		y = a + b;
		if ((y % 2) == 0 && y < 4000000)
			z = z + y;
		a = b;
		b = y;
	}
	printf("%ld", z);
	printf("\n");
	return (0);
}
