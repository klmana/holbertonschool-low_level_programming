#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 *main - Write a program that adds positive numbers.
 *@argc: number of the arguments
 *@argv: array of the arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	int result;

	result = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if(isalpha(argv[i][j]) != 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
