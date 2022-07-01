#include "3-calc.h"
#include <string.h>
/**
 *get_op_func - function to perform the operation asked by the user
 *@s: operator passed as argument to the program
 *Return: a pointer to the function that corresponds to the operator given
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
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op && s[1] == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
