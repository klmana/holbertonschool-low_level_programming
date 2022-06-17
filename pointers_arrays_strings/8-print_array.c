#include "main.h"
#include <stdio.h>
/**
 *print_array - array of integers, followed by a new line
 *@a: displayed in the same order as they are stored in the array
 *@n: elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i = i + 1;
	}
		printf("\n");

}
