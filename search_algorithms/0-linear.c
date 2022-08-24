#include "search_algos.h"

/**
 *linearr_search -Function that searches for a value in array of integers
 *Using the linear search algorithm
 *@array: Is a pointer to the first element of the array to search in
 *@size: Is the number of elements in array
 *@value: Matching value to index if found
 *Return: -1 if can't found / array is NULL / index value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	index = 0;
	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index = index + 1;
	}
	return (-1);
}
