#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function that generates random passwords for 101-crackme
 * Return: 0
 */
int main(void)
{
	int add;
	char b;

	srand(time(NULL));
	while (add <= 2645)
	{
		b = rand() % 128;
		add += b;
		putchar(b);
	}
	putchar(2772 - add);
	return (0);
}
