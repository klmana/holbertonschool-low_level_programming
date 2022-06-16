#include "main.h"
/**
 *swap_int - function that swaps the values of two integer.
 *@a: values of two integers.
 *@b: values of two integers.
 *create a function that uses 2 integers a and b and there corresponding pointers *a and *b
 *we use c as a temporary variable that will store the value for the swap
 *1st step: we define c as a copy of *a so takes the value of a so at this stage c=a=*a and b=*b
 *2th step: we change the value of *a by *b. so *a=*b=b=a and only C keeps the value of the initial a
 *3rd step: we allocate the value of c to *b so now we have c and *b and b with the initial value of a
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
