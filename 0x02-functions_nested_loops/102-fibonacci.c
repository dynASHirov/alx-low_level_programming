#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *  * followed by a new line
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a, b, c, y;

	a = 0;
	b = 1;
	for (c = 0; c < 50; c++)
	{
		y = a + b;
		printf("%d", y);
		if (c < 49)
		printf(", ");
		a = b;
		b = y;
	}
	return (0);
}
