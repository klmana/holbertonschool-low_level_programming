#include "main.h"

/**
 *get_bit - function that returns the value of a bit at a given index.
 *@n: number in base 10 format
 *@index: position int the binary value
 *Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;
	unsigned int max_size;

	/* define the max size of bit taken by n*/
	max_size = (sizeof(unsigned long int) * 16);
	/* case if index is over the size of n */
	if (index > max_size)
		return (-1);
	/* moves the index position to the right to find the bit */
	bitValue = ((n >> index) & 1);
	return (bitValue);
}
