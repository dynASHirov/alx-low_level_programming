#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: Number of arguments supplied to the program.
 * @argv: Array of pointers to the arguments.
 * Author: Sheriff - Lagos Intranet.
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int numb1, numb2, prodt;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[2]);
	prodt = numb1 * numb2;

	printf("%d\n", prodt);

	return (0);
}
