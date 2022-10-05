#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplication of two numbers, Then new line.
 * @argc: Number of arguments supplied to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int number1, number2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	product = number1 * number2;

	printf("%d\n", product);

	return (0);
}
