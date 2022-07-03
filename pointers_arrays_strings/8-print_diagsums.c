#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - fnct prints sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int p;
	int l;
	int r;

	r = 0;
	l = 0;
	i = 0;
	while (i < size)
	{
		p = (i * size) + i;
		l += *(a + p);
	i = i + 1;
	}
	j = 0;
	while  (j < size)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
		j = j + 1;
	}
	printf("%i, %i\n", l, r);
}
