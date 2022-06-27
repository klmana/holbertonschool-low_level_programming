#include "main.h"
#include <stdlib.h>

/**
 *array_range -  function that creates an array of integers.
 *@min: The array created should contain all the values from min
 *@max: ordered from min to max
 *Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{

	int *ptr;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min +  1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == (NULL))
		return (NULL);

	i = 0;
	while (min <= max)
	{
		ptr[i] = min++;
		i = i + 1;
	}
	return (ptr);
}
