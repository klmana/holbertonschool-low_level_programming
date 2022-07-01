#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *array_iterator - function that executes a function given as a parameter on ea
 *@array : array
 *@size: size of the array
 *@action:pointer to the funtion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (array != NULL  && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i = i + 1;
		}
	}
}
