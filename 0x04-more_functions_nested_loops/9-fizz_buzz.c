#include <stdio.h>
#include "main.h"

/**
*print_triangle - prints a triangle
*@size:size parameter of triangle
*Return: returns nothing
*/

void print_triangle(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 1; inc1 <= size; inc1++)
		{
			for ((inc2 = size - inc1); inc2 > 0; inc2--)
			{
				putchar(' ');
			}

			for (inc2 = 0; inc2 < inc1; inc2++)
			{
				putchar('#');
			}

			if (inc1 == size)
			{
				continue;
			}

			putchar('\n');
		}
	}
	putchar('\n');
}


========================================

TASK 11

#include <stdio.h>

/**
*main- prints the largest prime factor
*of a number
*
*Return: returns 0
*/

int main(void)
{
	long number = 612852475143;
	int inc;

	while (inc++ < number / 2)
	{
	if (number % inc == 0)
	{
		number /= 2;
		continue;
	}

	for (inc = 3; inc < number / 2; inc += 2)
	{
		if (number % inc == 0)
			number /= inc;
	}
	}
	printf("%ld\n", number);
	return (0);
}
