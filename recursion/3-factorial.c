#include "main.h"

/**
 *factorial - function that returns the factorial of a given number.
 * @n: number
 *
 * Return: -1 if n less  than 0; 0 if n equal 0, value of factor n otherwise
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));

}
