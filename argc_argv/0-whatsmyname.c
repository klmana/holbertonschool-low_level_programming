#include <stdio.h>
#include "main.h"

/**
 *main - program that prints its name, followed by a new line.
 *@argc: number of the arguments
 *@argv: array of the arguments
 *Return: (0)
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
