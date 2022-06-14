#include "main.h"
#include <stdio.h>

/**
 *FizzBuzz -  prints the numbers from 1 to 100, followed by a new line
 *multiples of three print Fizz instead of the number
 *for the multiples of five print Buzz
 *For numbers which are multiples of both three and five print FizzBuzz.
 *Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf(" fizz");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
			printf(" buzz");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" fizzbuzz");
		}
		else if (a == 1)
		{
			printf("%d", a);
		}
		else
		{
			printf(" %d", a);
		}
	}
	printf("\n");

	return (0);
}
