#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: Number of arguments supplied to the program.
 * @argv: Array of pointers to the arguments.
 * Author: Sheriff - Lagos Intranet.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int arrg;

	for (arrg = 0; arrg < argc; arrg++)
		printf("%s\n", argv[arrg]);

	return (0);
}
