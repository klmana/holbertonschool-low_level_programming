#include "main.h"

/**
 * flip_bits - function that returns the number of bits to flip 2 numbers
 * @n: number1
 * @m: number2 to be compared
 * Return: how many bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;

	diff = 0;
	/**
	 * Compares the last numbers of the binary number
	 * until the end of the string so when either n or m are equal to 0 
	 */
	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			diff = diff + 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (diff);
}
