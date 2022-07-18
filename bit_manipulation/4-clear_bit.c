#include "main.h"

/**
 *clear_bit - function that clear the value of a bit to 0 at a given index.
 *@n: number in base 10 format
 *@index: position int the binary value
 *Return: 1 if ok  or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tempIndex;
	unsigned int max_size;

	/* define the max size of bit taken by n*/
	max_size = (sizeof(unsigned long int) * 16);
	/* case if index is over the size of n */
	if (index > max_size)
		return (-1);
	/* use temp index with value 0 to copy value and move to the left */
	tempIndex = 1;
	tempIndex = ~(tempIndex << index);
	*n = (*n & tempIndex);
	return (1);
}
