#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int bytess, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytess = atoi(argv[1]);

	if (bytess < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytess; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == bytess - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");
	return (0);
}
