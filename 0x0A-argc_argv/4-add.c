#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        then a new line.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int numb, dig, sum = 0;

	for (numb = 1; numb < argc; numb++)
	{
		for (dig = 0; argv[numb][dig]; dig++)
		{
			if (argv[numb][dig] < '0' || argv[numb][dig] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[numb]);
	}

	printf("%d\n", sum);

	return (0);
}
