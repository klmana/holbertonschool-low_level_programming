#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *main - Write a program that multiplies two numbers.
 *@argc: number of the arguments
 *@argv: array of the arguments
 *Return:0
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		result *= atoi(argv[i]);
		i = i + 1;
	}
	printf("%d\n", result);
		return (0);
}
