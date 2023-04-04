#include <stdio.h>

/**
 *main - Prints 3 combination of numbers
 *
 *Return: Always (Success)
 */

int main(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '1'; d <= '9'; d++)
				{
					if (a <= c && b <= d && b != d)
						{
							putchar(a);
							putchar(b);
							putchar(' ');
							putchar(c);
							putchar(d);
								if (b != '8' || a != '9' || c != '9' || d != '9')
							{
								putchar(',');
								putchar(' ');
							}
						}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
