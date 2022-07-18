#include "main.h"

/**
 *print_binary - function that prints the binary representation of a number
 *@n: number in base 10 format
 *Return: number in binary via _putchar
 *
 */

void print_binary(unsigned long int n)
{
	/* shift the number by one bit and recursive function call */
	if (n > 1)
		print_binary(n >> 1);
	/* prints the bits of number */
	_putchar((n & 1) + '0');
}
