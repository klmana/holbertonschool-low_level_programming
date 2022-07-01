#include "3-calc.h"

/**
 *main - Write a program that performs simple operations.
 *@argc: the number of arguments
 *@argv: arrau the arguments
 *Return: The program prints the result of the operation
 */

int main(int argc, char *argv[])
{
	int resul;

	if (argc != 4)
	{
		return (0);
	}
	resul = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", resul);
	return (0);
}
