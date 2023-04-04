#include <stdio.h>

/**
 *main - Prints combination of numbers
 *
 *Return: Always (Success)
 */
int main(void)
{
	int alph;
	int beta;

	for (alph = '0'; alph <= '9'; alph++)
{
	for (beta = '1'; beta <= '9'; beta++)
{
	if (alph < beta && alph != beta)
{
	putchar (alph);
	putchar (beta);
	if (alph != '8' || beta != '9')
{
	putchar(',');
	putchar(' ');
}
}
}
}
	putchar('\n');
	return (0);
}
