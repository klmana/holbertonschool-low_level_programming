#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *create_array - function that creates an array of chars,
 *@size: initializes it with a specific char.
 *@c: initializes it with a specific char.
 *Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int i;

	i = 0;
	if (size == 0)
		return ("NULL");

	j = (char *) malloc(sizeof(char) * size);

	if (j == NULL)
		return (0);

	while (i < size)
	{
		j[i] = c;
		i = i + 1;
	}
	j[i] = '\0';
	return (j);
}
