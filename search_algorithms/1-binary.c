#include "search_algos.h"

/**
 *print_array - Prints an array of integers
 *@array: The array to be printed
 *@size: The size of the array
 */
void print_array(int *array, size_t size)
{
	size_t index = 0;

	printf("Searching in array: ");
	while (index < size)
	{
		printf("%d, ", array[index]);
		index = index + 1;
	}
	printf("%d\n", array[index]);
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
	size_t right;

	if (array == NULL || size == 0)
		return (-1);

	right = size - 1;
	while (left <= right)
	{
		print_array(array + left, right - left);
		midlekey = left + (right - left) / 2;
		if (array[midlekey] < value)
			left = midlekey + 1;
		if (array[midlekey] > value)
			right = midlekey - 1;
		if (array[midlekey] == value)
			return (midlekey);
	}
	return (-1);
}
