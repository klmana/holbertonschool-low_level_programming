#include "main.h"
/**
 *swap_int - function that swaps the values of two integer.
 *@a: values of two integers.
 *@b: values of two integers.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
