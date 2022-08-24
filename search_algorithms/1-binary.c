#include "search_algos.h"

/**
 *print_array - Prints an array of integers
 *@array: The array to be printed
 *@left: index of array
 *@right: index of array
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t index;

	index = left;
	while (index <= right)
	{
		if (index != right)
			printf("%d, ", array[index]);
		else
			printf("%d\n", array[index]);
		index = index + 1;
	}
}

/**
 *binary_search - function that searches for a value in a sorted array
 *of integers using the binary search algorithm
 *@array: Is a pointer to the first element off the array to search in
 *@size: Is the number of elements in array
 *@value: Value to search for
 *Return: -1 if can't found / array is NULL / index value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t midlekey = 0;
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL)
		return (-1);
	while (left < right)
	{
		print_array(array, left, right);
		midlekey = (left + right) / 2;
		if (array[midlekey] == value)
			return (midlekey);
		else if (array[midlekey] > value)
			right = midlekey - 1;
		else
			left = midlekey + 1;
	}
	return (-1);
}
