#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *int_index - function that searches for an integer.
 *@array: array
 *@size: size of the array
 *@cmp: pointer to the function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i = i + 1;
		}
	}
	return (-1);
}
