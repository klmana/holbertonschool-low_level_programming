#include <stdio.h>
#include "main.h"

/**
 *main - Write a program that prints all arguments it receives.
 *@argc: number of the arguments
 *@argv: array of the arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
		i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);

		i = i + 1;
	}
	return (0);
}
