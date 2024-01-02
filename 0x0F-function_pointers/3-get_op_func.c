#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func -  the function that selects the correct function
 * to perform the operation asked by the user.
 * @s: An input char pointer operator passed as argument
 * Return: a pointer to the function that corresponds to the
 * operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j = 0;

	while (j < 5)
	{
		if (*(ops[j]).op == *s && *(s + 1) == '\0')
			return (ops[j].f);
		j++;
	}
	return (NULL);
}

